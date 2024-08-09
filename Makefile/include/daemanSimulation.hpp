#ifndef DAEMONSIMULATION
#define DAEMONSIMULATION

#include "capteur.hpp"

#include <iostream>

class Daemonsimulation
{

private:
        Capteur capteurSim2;

public:
        Daemonsimulation(); //constructeur 
        ~Daemonsimulation(); //Destructeur
        void daemonMode(); //méthode représentant le mode daemon
};

#endif