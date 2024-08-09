#include "si7021Sensor.hpp"

#include <string>
using namespace std;

si7021Sensor::si7021Sensor(const char *bus)
{
    //Ouvrir le bus I2C
    this->file = open(bus, O_RDWR);

    // Vérifier s'il a été ouvert avec succès
    if (this->file < 0)
    {
        perror("Failed to open the bus");
        exit(1);
    }
    ioctl(this->file, I2C_SLAVE, 0x40); //Adresse I2C du capteur 0x40
}

si7021Sensor::si7021Sensor()
{
}

si7021Sensor::~si7021Sensor()
{
}

float si7021Sensor::temperature()
{
    // Commande de lecture de la température
    char config = 0xF3;

    // Envoi de la commande au capteur
    if (write(this->file, &config, 1) < 1)
    {
        cout << "Error : Command not sent" << endl;
    }
    sleep(1); // Attendre que le capteur traite la commande

    uint8_t data[2] = {0, 0}; // Buffer pour stocker les données relatives à la température

    // Lire les données de température
    if (read(this->file, (void *)data, 2) != 2)
    {
        cout << "Error : Input/output Error" << endl;
    }
    float cTemp = (((float)(((uint16_t)data[0] << 8) + (uint16_t)data[1]) * 175.72f) / 65536.0f) - 46.85f; // Calculer la température en Celsius
    // float fTemp = cTemp * 1.8f + 32.f;

    // cout << "Temperature in Celsius : %.2f °C " << cTemp << endl;
    // cout << "Temperature in Fahrenheit : %.2f °F" << fTemp << endl;
    return cTemp;
}

float si7021Sensor::Humidite()
{
    // Commande de lecture de l'humidité
    char config = 0xF5;

    // Envoi de la commande au capteur
    if (write(this->file, &config, 1) < 1)
    {
        cout << "Error : Command not sent" << endl;
    }
    sleep(1); // Attendre que le capteur traite la commande

    uint8_t data[2] = {0, 0};// Buffer pour stocker les données relatives à l'humidité

    // Lire les données d'humidité 
    if (read(this->file, (void *)data, 2) != 2)
    {
        cout << "Error : Input/output Error" << endl;
    }
    float humidity = (((float)(((uint16_t)data[0] << 8) + (uint16_t)data[1]) * 125.0f) / 65536.0f) - 6.f;

    // Output data to screen
    // cout <<"Relative Humidity : %.2f RH" << humidity << endl;

    return humidity;
}