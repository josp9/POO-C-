README - Home Automation Box
1. Introduction :
"Home Automation Box" est un mini-projet pratique de programmation orientée objet en C++.
Il a pour but de concevoir et d'implémenter un programme domotique fonctionnant sur un système Linux embarqué, en particulier sur une Raspberry Pi 3B+.
Ce projet permet de mettre en application les compétences acquises tout en respectant un cahier des charges précis.

2. Description :
Le projet "Home Automation Box" consiste à créer un programme capable de lire les données environnementales telles que l'humidité et la température d'une pièce.
Le programme doit fonctionner en deux modes distincts : un mode interactif, où l'utilisateur peut demander des mesures spécifiques, et un mode daemon,
où les mesures sont prises et affichées régulièrement de manière continue.

3. Exigences :
Les exigences principales du projet sont les suivantes :
EXG1 : Le code source doit être en C++, correctement indenté et organisé.
EXG2 : La compilation doit être reproductible sur les cibles désignées avec les options GCC -Wall -Wextra -Werror.
EXG3 : Simuler un capteur I2C.
EXG4 : Prendre en charge le capteur I2C Adafruit Si7021.
EXG5 : Implémenter un mode interactif.
EXG6 : Implémenter un mode daemon.
EXG9 : Supporter la cible GNU/Linux ARM32 pour Raspberry Pi 3B+
