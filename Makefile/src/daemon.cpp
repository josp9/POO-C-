#include "daemon.hpp"

#include <unistd.h>

using namespace std;

Daemon::Daemon(const char *bus) : capteurReel2(bus)
{
}

Daemon::Daemon()
{
}

Daemon::~Daemon()
{
}

void Daemon::daemonMode()
{
    while (true)
    {

        cout << "La temperature est de :" << capteurReel2.temperature() << "°c" << endl;
        cout << "L'humidite est de :" << capteurReel2.Humidite() << "%" << endl;

        sleep(2);
    }
}
