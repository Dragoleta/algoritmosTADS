#include "veiculo2.h"
#include <iostream>

using namespace std;

// Terrestrial

int Terrestrial::getMaxCapacity()
{
    return cap_max;
};
void Terrestrial::setMaxCapacity(int cap_max1)
{
    cap_max = cap_max1;
};
void Terrestrial::move() { cout << "Terrestrial Vehicle moved"; };

// Aquatic

float Aquatic::getMaxLoad() { return maxLoad; };
void Aquatic::setMaxLoad(float newLoad)
{
    maxLoad = newLoad;
};
void Aquatic::move() { cout << "Aquatic Vehicle moved"; };

// Flyer

float Flyer::getMaxSpeed() { return vel_max; };
void Flyer::setMaxSpeed(float newVel)
{
    vel_max = newVel;
};
void Flyer::move() { cout << "Flyer Vehicle moved"; };