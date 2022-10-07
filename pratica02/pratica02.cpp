#include <iostream>
#include "veiculo2.h"

using namespace std;

int main()
{
    // Vehicle * terr, * aqua, * aero;

    // Vehicle *terr = new Terrestrial("VT1");
    // Vehicle *terr = (Vehicle *)terr;
    // terr->setMaxCapacity(45);

    // Vehicle *aqua = new Aquatic("VQ1");
    // Vehicle *aqua = (Vehicle *)aqua;
    // Vehicle * aqua->setLoadMax(12.5);

    Vehicle *aero = new Aero("VA1");
    // Vehicle *aero = (Vehicle *)aero;
    // aero->setMaxSpeed(1040.5);
    aero->move();
};