#ifndef DAEMON
#define DAEMON

#include "si7021Sensor.hpp"

#include <iostream>

class Daemon
{

private:
        si7021Sensor capteurReel2;

public:
        Daemon(); //constructeur par défaut
        Daemon(const char *bus); //constructeur avec paramètre
        ~Daemon(); //Destructeur
        void daemonMode(); //méthode représentant le mode daemon
};

#endif