#ifndef CAPTEUR
#define CAPTEUR

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

class Capteur
{

public:
    Capteur(); //constructeur 
    ~Capteur(); //Destructeur
    float lireTemperature(); //méthode pour lire  la température du capteur fictif
    float lireHumidite(); //méthode pour lire l'humidite du capteur fictif
};

#endif