#include <iostream>
#include "veiculo.h"

using namespace std;

int main(){

// Veiculo * terr, * aqua, * aereo;

Veiculo * terr = new Terrestre("VT1");
terr->setCapacidadeMax(45);

Veiculo * aqua = new Aquatico("VQ1");
Veiculo * aqua->setCargaMax(12.5);

Veiculo * aereo = new Aereo("VA1");
((Veiculo *) aereo)->setMaxSpeed(1040.5);

};