#ifndef INTERACTIF
#define INTERACTIF

#include "si7021Sensor.hpp"

#include <iostream>

class Interactif
{
private:
    si7021Sensor capteurReel;

public:
    Interactif(); //constructeur par défaut
    Interactif(const char *bus); //constructeur avec paramètre
    ~Interactif(); //Destructeur
    void interactifMode(); //méthode représentant le mode intéractif
};

#endif