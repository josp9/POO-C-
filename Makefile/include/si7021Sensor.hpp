#ifndef SI7021SENSOR
#define SI7021SENSOR

#include <fcntl.h>
#include <linux/i2c-dev.h>
#include <sys/ioctl.h>
#include <iostream>
#include <cstdlib>
#include <cstdint>
#include <cstring>
#include <unistd.h>

class si7021Sensor
{
private:
    int file; //Descripteur de fichier pour le bus I2C

public:
    si7021Sensor();//constructeur par défaut
    si7021Sensor(const char *bus); //constructeur avec paramètre
    ~si7021Sensor(); //Destructeur
    float temperature(); // Méthode pour lire la température
    float Humidite(); // Méthode pour lire l'humidité
};

#endif