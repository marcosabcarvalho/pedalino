https://github.com/thomasliethoudt/pedalino/blob/master/liste%20mat%C3%A9riel.pngVoici le lien qui mène vers les composants nécessaire : 
SEANCE DU 20 DECEMBRE

lors de cette première séance, nous avons fait le choix de notre projet. Il se porte sur le domaine de la musique. Nous voulons réaliser une pédale multi effets pour une guitare elctrique à l'aide de l'arduino. Le but de projet et d'imaginer et créer notre propre effets sonores en programmant l'arduino. Dans un second temps, le but serait de pouvoir modifier les effets de la pédale à partir d'un téléphone. c'est à dire ne pas utiliser de potentiométre mais de faire varier une bouton interactif sur l'ecran par exemple.

Lors de cette première séance nous avons donc crée le projet sur GitHub. Nous avons ensuite commencé les recherches internet sur un eventuel projet existant de pedale multi effets a partir de arduino. Nous avons trouvé un site assez complet d'un projet similaire au notre. Voici le lien :

 https://diyhacking.com/arduino-diy-guitar-pedal/
 
 http://www.instructables.com/id/Arduino-Guitar-Pedal/
 
 http://www.tubefr.com/pedale-de-guitare-arduino-lo-fi.html
 
 Apres avoir discuté du projet avec Pascal Masson, il nous a conseillé de contacter un ancien élève de ppolytech qui a lancé a  propre maeque de pédale. La marque est Anasounds. Nous lui avons envoyé un message pour demander des conseils.
 
 Mr Pascal Masson nous a également donner une ancienne pedale multi effets defectueuse. Nous pourrons peut etre nous servir des boutons et du boîtier, la démonter pour en savoir plus sur les circuits.

_______________________________________________________________________________________________________________________________________


SEANCE DU 10 janvier 2018

Lors de cette séance, nous avons repris la pedalshield sur internet. La pedalshniel est également présente sur GitHub.
il se trouve que des pack sont proposé à la vente pour monter sa propre pédale avec arduino. Nous comptons donc nous inspirer des schemas de la data shield en open source. Nous avons commencé à regarder la liste des composants nécessaire que nous allons commander. 




Voici le lien qui mène vers les composants nécessaire : 
https://github.com/thomasliethoudt/pedalino/blob/master/liste%20mat%C3%A9riel.png


Nous avons commencer à essayer de comprendre le code, par exemple, comparer le code d'un delay et d'une disto pour voir ce qui change.
_______________________________________________________________________________________________________________________________

SEANCE DU 19 janvier

Pour cette séance, j'ai recherché des infos complémentaire sur les schémas electriques pour mieux les comprendre. J'ai fait des recherches plus générales sur les pédales analogiques et numériques. Leur fonctionnement, avantages et inconvénients dans un cadre musical car je n'ai pas tellement de connaissance dans le domaine. Le numérique présente des points positifs, notamment en terme de prix et de place. Mais la qualité de l'analogique reste supérieur au numérique.
_______________________________________________________________________________________________________________________________

SEANCE du 24 janvier 2018

Pour cette séance, nous avons assister aux présentations des projets de toute la classe. Nous avons également fait la présentation de notre projet. Ensuite j'ai travailler sur le module bluetooth que luca avait crée avec des LED la semaine passé. J'ai eu quelques difficultés, car j'essayais de faire varier l'intensité de la LED choisi avec le PWM, tout en éteignant les autres LED non utilisées.
_______________________________________________________________________________________________________________________________

SEANCE DU 06 février 2018

Cette séance, nous avons recu le matériel. Nous avons donc commencé à regarder le schéma electrique pour voir ce que nous pouvions déjà commencé à monter. Luca a commencé à monter la plaque. J'ai continué à travailler sur l'application bluetooth     avec les LED pour pouvoir modifier leur intensité avec le pad bluetooth. 

________________________________________________________________________________________________________________________________

SEANCE DU 19 février 2018

Pour cette séance, j'ai tenté de modifier le code de la distorsion pour y mettre la fonctionnalité bluetooth. J'ai repérer quels étaient les paramètres qui variaient dans le code pour savoir sur quoi le code du blutooth allait agir. Je n'ai pas beaucoup avancé étant donné mes lacunes en code.

Par ailleurs nous avons avec Luca, apprit à souder. En effet nous avons soudé des petits fils sur chacun des jack pour les connecter au circuit.

_________________________________________________________________________________________________________________________________

SEANCE DU 12 MARS 2018

Lors de cette seance,nous nous sommes occupé du footswitch, étdier comment il se branchait au circuit avec les 9 fiches diffférentes. Nous avons soudé les fils au footswitch.


________________________________________________________________________________________________________________________________

SEANCE DU 26 MARS 2018

Lors de cette séance, nous avons testé le signal à différent endroits de notre pédale, tout en changeant les effets pour visualiser le signal sortant sur l'oscilloscope. Il s'avère que quelques petites choses ne fonctionnent pas comme prévu.
on arrive à avoir des fréquences d'entrée de plus de 5KHz alors que les passes  bas avant l'arduino sont censés filtrés les frequence au dela de 5KHz. De plus les signaux visualiser sur l'oscilloscopo n'ont pas la forme attendue.

_________________________________________________________________________________________________________________________________________

SEANCE DU 5 AVRIL 2018

Lors de cette seance nous avons fait notre seconde presentation du projet en idiquant les difficultés rencontée, les avancés et le innovations futures.
Nous avons commencé a regrouper tout les fichiers des effets dans un même programme et avec le bluetooth, le but est de pouvoir avec le code bluetooth, choisir un effet en question.

SEANCE DU 9 AVRIL 2018

lors de cette seance j'ai continué a regrouper les effets dans un même programme avec le bluetooth, je n'ai pas eu le temps de tester le dispositif bluettooth avec l'oscilloscope. J'ai renconntré beaucoup de difficultés à incrémenter le bluetooth dans le code des effets. Car si on regarde le code, Il y a des des TIMER ISR qui m'ont gêné. Le fichier du bluetooth est opérationnel normalement. A la maison nous allons voir si il marche.

SEANCE  DU 2 MAI

Pour ces 2 dernières séances de projets j'ai commencé à réfléchir à la boîte qui allait acceuillir la pédale. J'ai tracé un brève plan car au début nous voulons réaliser une boite en bois. Nous avons regardé les bois que nous pouvions   prendre dans la salle d'elec mais nous nous sommes dit que nous allion prendre notre propre bois.Par ailleurs, nous avons abandonné l'idée de mettre un footswitch à la pédale. Etant donné  que les changements de l'intensité des effets etaient quasiment inaudible, nous avons décidé de ne pas pouvoir modifier l'intensité des effets.

SEANCE  DU 7 MAI

Cette semaine, nos idées ont changé. Etant donné les nombreux faux contact dans notre circuit , a cause de la qualité des fils, des soudures(parfois le son de la guitare se coupe et on entend plus rien, il faut alors chercher dans le circuit de ou cela vient). Si on a une boite en dur et que il y a un faut contact, il est trés difficile d'atteindre le circuit pour voir de ou le problème provient. Nous avons donc décider de faire une boite minimale, qui peut s'ouvrir facilement pour accéder au circuit.
