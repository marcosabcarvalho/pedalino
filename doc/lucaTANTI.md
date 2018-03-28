# Séance du 21/12/2017
Nous avons décidé de nous mettre en binome avec mon collaborateur Thomas Liethoudt. Nous nous sommes mis d'accord pour partir sur un thême autour de la musique et nous allnons essayer de réaliser une pédale d'effet pour guitare programmable depuis un téléphone en bluetooth. Nous avons trouvé quelques projets sur Internet de pédale multi-effet crées avec un Arduino:  
https://diyhacking.com/arduino-diy-guitar-pedal/  
http://www.instructables.com/id/Arduino-Guitar-Pedal/  
http://www.tubefr.com/pedale-de-guitare-arduino-lo-fi.html  
Le projet le plus proche de la pédale que l'on voudrait réaliser est la pédale d'effet du premier lien.  
Le but du contrôle en bluetooth serait de sélectionner un des différents effets programmé sur une application, puis le téléphone enverrait l'informaion en bluetooth à l'arduino.  
Nous avons également contacté Anasounds afin d'avoir quelques informations sur la fabrication des pédales d'effets. 
Nous disposons déjà d'un multi-effet où nous pouvons récupérer du matériel.      
______________________________________________________________________________________________________________________________________________
# Séance du 10/01/2018
Nous avon continué à nous renseigner sur les différents projets déjà rélalisés. Nous avons donc décider de partir sur une base de la pédale pedalShield (https://diyhacking.com/arduino-diy-guitar-pedal/ ).  
Ce projet a pour avantage de pouvoir gérer un nombre important d'effets à l'inverse d'autres projets trouvés sur Internet.  
Nous avons commencé à nous renseigner sur le matériel que nous allons de voir utiliser.  
La liste du matériel est la suivante: https://github.com/thomasliethoudt/pedalino/blob/master/liste%20mat%C3%A9riel.png

# Séance du 19/01/2018 
Cette séance a été consacrée pour moi à essayer de mieux comprendre un code déjà existant d'effet pour la pédale pedalshield. Le code utilisant des fonctions de l'arduino encore jamais utilisées en cours j'ai du essayer de trouver quelques informations sur internet pour ces nouvelles fonctions. Le code est disponible dans le dossier code tout comme le début des explications du code dans le fichier explications.txt. Il reste encore cependant plusieurs fonctions que l'on ne connait pas et les explications sur Internet sont assez rares. J'ai également commencé a créer un exemple d'interface sur le téléphone pour le futur envoie des informations en Bluetooth et un debut de code qui utilise pour l'instant des LEDs car nous n'avons pas encore le matériel.

# Séance du 24/01/2018 
Cette séance nous vans fait notre première présentation de notre projet. Comme nous n'avions pas le matériel afin de commencer à réaliser notre projet nous avons continués à se renseigner sur notre projet au niveau du code.


# Séance du 06/02/2018 
Nous avons reçu une partie du matériel. Nous avons vérifier ce qu'il nous manque puis j'ai commencé à assembler les composants de la pédale avec les composants que nous avons reçu. 

# Séance du 19/02/2018
Nous avons reçu une seconde partie du matériel (jack et amplificateur). Nous avons soudé des fils sur le jack afin de pouvoir le brancher et j'ai continué le branchement des composants de la pédale d'effet.

# Séance du 12/03/2018
La quasi totalité du matériel est arrivé, les branchements sont faits il ne manque plus que le footswitch à connecter et la led. Mais la pédale peut théoriquement fonctionner. Après le premier test il apparait qu'elle fonctionne par intermittance. Il doit surement y avoir un problème au niveau de certaines connections.

# Séance du 26/03/2018
La pédale d'effet fonctionne il y a cependant un petit faux contact au niveau d'une des capacités. Nous avons étudier le signal de sortie de la pédale sur oscilloscope en fontion de l'effet sélectionné.
