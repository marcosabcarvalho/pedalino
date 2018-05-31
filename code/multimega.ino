
#include <SoftwareSerial.h>  //Software Serial Port  
#define RxD 12    //Pin 10 pour RX, PB2 sur votre board, a brancher sur le TX du HC-06
#define TxD 13    //Pin 11 pour TX, PB3 sur votre board, a brancher sur le RX du HC-06
SoftwareSerial BTSerie(RxD,TxD);

//defining harware resources.
#define LED 4
#define FOOTSWITCH 12
#define TOGGLE 2


//defining the output PWM parameters
#define PWM_FREQ 0x00FF // pwm frequency - 31.3KHz
#define PWM_MODE 0 // Fast (1) or Phase Correct (0)
#define PWM_QTY 2 // 2 PWMs in parallel
char effect_type='0';
//other variables
int input,output; //initial value adjusted by try and error.
int vol_variable=10000;
int distortion_threshold=6000; //initial value adjusted by try and error
int bit_crush_variable=0;
 
#define MAX_DELAY 3000
unsigned int Delay_Buffer[MAX_DELAY];
unsigned int DelayCounter = 0;
unsigned int Delay_Depth = MAX_DELAY;
int dist_variable=10;


int test=1; 
 
int counter=0;
unsigned int ADC_low, ADC_high;
 
void setup() {
    //setup bluetooth
  Serial.begin(9600);
    // Configuration du bluetooth  
  pinMode(RxD, INPUT);  
  pinMode(TxD, OUTPUT);  
  BTSerie.begin(9600); 
    Serial.println("En attente de la commandes AT"); 
    delay(100);
  // Test des commandes AT  
  BTSerie.print("AT+VERSION");  //Demande le NÂ° de version 
  delay(1000); 
 
  //setup IO
  pinMode(FOOTSWITCH, INPUT_PULLUP);
  pinMode(LED, OUTPUT);
  pinMode(6, OUTPUT); //PWM0 as output
  pinMode(7, OUTPUT); //PWM1 as output
 
  // setup ADC
  ADMUX = 0x60; // left adjust, adc0, internal vcc
  ADCSRA = 0xe5; // turn on adc, ck/32, auto trigger
  ADCSRB = 0x00; // ADC free running mode
  DIDR0 = 0x01; // turn off digital inputs for adc0
 
  // setup PWM
  TCCR4A = (((PWM_QTY - 1) << 5) | 0x80 | (PWM_MODE << 1)); //
  TCCR4B = ((PWM_MODE << 3) | 0x11); // ck/1
  TIMSK4 = 0x20; // interrupt on capture interrupt
  ICR4H = (PWM_FREQ >> 8);
  ICR4L = (PWM_FREQ & 0xff);
  DDRB |= ((PWM_QTY << 1) | 0x02); // turn on outputs
  sei(); // turn on interrupts - not really necessary with arduino
  }
 
void loop() 
{
   /****SELECTION MODE*****/
//enter in "selection effect mode", the program stays in this loop while the toggle switch is down
// you can change effect pushing buttons, the number of blinks will indicate the effect number
if(effect_type!='0') digitalWrite(LED, HIGH); // allume la led
else digitalWrite(LED, LOW);
if (test==1){
   char revChar;      
  //On lit caractere par caractere sur le BTSerie et on affiche sur le Terminal Serie  
  if (BTSerie.available()) {  
      revChar = BTSerie.read(); //lecture 
      if((revChar!='+')&&(revChar!='-')&&(revChar!='e')){
        effect_type=revChar;
    }

  }
}

}

 
ISR(TIMER4_CAPT_vect) 
{

  // get ADC data
  ADC_low = ADCL; // you need to fetch the low byte first
  ADC_high = ADCH;
  //construct the input sumple summing the ADC low and high byte.
  input = ((ADC_high << 8) | ADC_low) + 0x8000; // make a signed 16b value


    //**** EFFECT AREA***///
    // The effects are selected depending on effect type.
    switch(effect_type)
    {
    case '1':
    /**** DELAY EFFECT ***/
    //The input_signal is stored and played using a circular buffer
    Delay_Buffer[DelayCounter] = (((ADC_high << 8) | ADC_low) + 0x8000);
    DelayCounter++;
    if(DelayCounter >= Delay_Depth+15) DelayCounter = 0;
    output = (Delay_Buffer[DelayCounter] +(((ADC_high << 8) | ADC_low) + 0x8000))>>1;
    Serial.print("a");
    break;
 
    case '2':
    /**** DISTORTION EFFECT ***/
    if(input>distortion_threshold) output=distortion_threshold+1000;
    else output=input;
    break;
 
    case '3':
    /**** FUZZ EFFECT ***/
    if(input>distortion_threshold+25) output=32768;
    else if(input<-distortion_threshold+25) output=-32768;
    else output=input;
    break;
 
    case '4':
    /*** Volume Booster Effect ***/
    output = map(input, -32768, +32768,-vol_variable, vol_variable);
     case '5'://echo
    /**** ECHO EFFECT ***/
    Delay_Buffer[DelayCounter]  = (input + Delay_Buffer[DelayCounter])>>1;
    DelayCounter++;    
    if(DelayCounter >= Delay_Depth) DelayCounter = 0;
    output = (input + (Delay_Buffer[DelayCounter]))>>1;
    break;
    case '0':
    output= ((ADC_high << 8) | ADC_low) + 0x8000; // make a signed 16b value
    break;
    }
 
  //write the PWM signal
  OCR4AL = ((output + 0x8000) >> 8); // convert to unsigned, send out high byte
  OCR4BL = output; // send out low byte
}
