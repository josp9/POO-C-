#include "capteur.hpp"

#include <string>
using namespace std;

Capteur::Capteur()
{
}

Capteur::~Capteur()
{
}

float Capteur::lireTemperature()
{
    // Générer un nombre entier aléatoire entre 0 et 50 à l'aide de la fonction rand().
    //le résultat est ensuite assigné à la variable 'temp'.
    float temp = rand() % 51;

    //Renvoie la valeur
    return temp;
}

float Capteur::lireHumidite()
{
    // Générer un nombre entier aléatoire entre 0 et 100 à l'aide de la fonction rand().
    //le résultat est ensuite assigné à la variable 'Humid'.
    float Humid = rand() % 101;

    //Renvoie la valeur
    return Humid;
}