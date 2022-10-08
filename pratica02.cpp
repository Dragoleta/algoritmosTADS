#include <iostream>
#include "veiculo2.h"
#include <string>

using namespace std;

int main()
{

	Aero v3 ("v3");
    Vehicle * terr, * aqua, * aero;

    // Vehicle *terr = new Terrestrial("VT1");
    // Vehicle *terr = (Vehicle *)terr;
    // terr->setMaxCapacity(45);

     Vehicle *aqua = new Aquatic("VQ1");
     ((Vehicle *)aqua) -> setLoadMax(12.4);
     aqua->move();

//    aero = new Aero("v3");
//    ((Aero*)aero) -> setMaxSpeed(1000);
//    aero->move();
//    delete aero;
};
