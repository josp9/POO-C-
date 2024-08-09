#include "interactif.hpp"

#include <string>

using namespace std;

Interactif::Interactif(const char *bus) : capteurReel(bus)
{
}

Interactif::Interactif()
{
}

Interactif::~Interactif()
{
}

void Interactif::interactifMode()
{
    string commande;

    while (true)
    {
        cout << "Entrer une commande suivante pour afficher les données (temp, humi, stop): " << endl;

        cin >> commande;
        if (commande == "temp")
        {
            cout << "La temperature est de : " << capteurReel.temperature() << "°c" << endl;
        }
        else if (commande == "humi")
        {

            cout << "L'humidite est de : " << capteurReel.Humidite() << "%" << endl;
        }
        else if (commande == "stop")
        {
            break;
        }
        else
        {
            cout << "La commande n'est pas reconnue. Entrer une commande existante." << endl;
        }
    }
}
