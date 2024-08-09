#ifndef INTERACTIFSIMULATION
#define INTERACTIFSIMULATION

#include "capteur.hpp"

#include <iostream>

class Interactifsimulation
{
private:
    Capteur capteurSim; 

public:
    Interactifsimulation(); //constructeur 
    ~Interactifsimulation();  //Destructeur
    void interactifMode(); //méthode représentant le mode intéractif
};

#endif