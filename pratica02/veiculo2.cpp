#include "veiculo2.h"
#include <iostream>

using namespace std;

int Terrestrial::getMaxCapacity()
{
    return cap_max;
};
void Terrestrial::setMaxCapacity(int cap_max1)
{
    cap_max = cap_max1;
};
void Terrestrial::move() { cout << "Terrestrial Vehicle moved"; };

float Aquatic::getMaxLoad() { return maxLoad; };
void Aquatic::setMaxLoad(float newLoad)
{
    maxLoad = newLoad;
};
void Aquatic::move() { cout << "Aquatic Vehicle moved"; };

float Aero::getMaxSpeed() { return vel_max; };
void Aero::setMaxSpeed(float newVel)
{
    vel_max = newVel;
};
void Aero::move() { cout << "Aero Vehicle moved"; };