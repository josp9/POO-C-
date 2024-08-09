#include <iostream>
#include <string>

#include "capteur.hpp"
#include "interactif.hpp"
#include "daemon.hpp"
#include "si7021Sensor.hpp"
#include "interactifSimulation.hpp"
#include "daemanSimulation.hpp"

using namespace std;

int main()
{
  // const char* bus = "/dev/i2c-1";
  
  /*On instancie deux objets (test et test2 de type Interactif,Daemon)
  pour effectuer les tests sur le capteur réel*/

  // Interactif testReel(bus);
  // Daemon testReel2(bus);

  /*On instancie deux objets (test et test2 de type Interactif,Daemon)
  pour effectuer la sumilation du capteur*/

  Interactifsimulation testSim;
  Daemonsimulation testSim2;

  string choixMode;
  while (true)
  {
    cout << "Veuillez saisir le mode de fonctionnement (interactif ou daemon) : " << endl;
    cin >> choixMode;
    if (choixMode == "interactif")
    {
      // testReel.interactifMode();
      testSim.interactifMode();
    }

    if (choixMode == "daemon")
    {
      // testReel2.daemonMode();
      testSim2.daemonMode();
    }
  }

  return 0;
}
