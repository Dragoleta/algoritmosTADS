#include "veiculo.h"
#include <iostream>

using namespace std;


int Terrestre::getCapacidadeMax() {
    return cap_max;
};
void Terrestre::setCapacidadeMax(int cap_max1) {
    cap_max = cap_max1;
};

float Aquatico::getCargaMax() { return carga_max;};
void Aquatico::setCargaMax(float newCarga) {
    carga_max = newCarga;
};

float Aereo::getMaxSpeed() { return vel_max;};
void Aereo::setMaxSpeed(float newVel) {
    vel_max=newVel;
};