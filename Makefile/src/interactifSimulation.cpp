#include "interactifSimulation.hpp"
#include <string>

using namespace std;

Interactifsimulation::Interactifsimulation()
{
}

Interactifsimulation::~Interactifsimulation()
{
}

void Interactifsimulation::interactifMode()
{
    //variable pour stocker les commandes de l'utilisateur.
    string commande;

    while (true)
    {
        // Inviter l'utilisateur à entrer une commande pour afficher des données (temp, humi, stop)
        cout << "Entrer une commande suivante pour afficher les données (temp, humi, stop): " << endl;

        // Lire la commande de l'utilisateur
        cin >> commande;

        // Vérifier la commande de l'utilisateur et prendre les mesures appropriées
        if (commande == "temp")
        {
            // Afficher la température
            cout << "La temperature est de : " << capteurSim.lireTemperature() << "°c" << endl;
        }
        else if (commande == "humi")
        {
            // Afficher l'humidité
            cout << "L'humidite est de : " << capteurSim.lireHumidite() << "%" << endl;
        }
        else if (commande == "stop")
        {
            // Sortir de la boucle si l'utilisateur saisit "stop"
            break;
        }
        else
        {
            // Afficher un message si la commande saisie n'est pas reconnue
            cout << "La commande n'est pas reconnue. Entrer une commande existante." << endl;
        }
    }
}