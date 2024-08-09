#include "daemanSimulation.hpp"

#include <unistd.h>

using namespace std;

Daemonsimulation::Daemonsimulation()
{
}

Daemonsimulation::~Daemonsimulation()
{
}

void Daemonsimulation::daemonMode()
{
    //boucle infinie  
    while (true)
    {
        // Afficher la température
        cout << "La temperature est de :" << capteurSim2.lireTemperature() << "°c" << endl;

        // Afficher l'humidité
        cout << "L'humidite est de :" << capteurSim2.lireHumidite() << "%" << endl;

        // Pause de l'exécution pendant 2 secondes
        sleep(2);
    }
}