#include <iostream>
#include "veiculo2.h"
#include <string>

using namespace std;

int main()
{

	// Flyer v3("3");
    Aquatic v4("Q1");
    Vehicle * terr, * aqua, * flyer, * anphi;

    // Vehicle *terr = new Terrestrial("VT1");
    // Vehicle *terr = (Vehicle *)terr;
    // terr->setMaxCapacity(45);

     Vehicle *aqua = new Aquatic("Q1");
     ((Vehicle *)aqua) -> setLoadMax(12.4);
     aqua->move();

//    aero = new Aero("v3");
//    ((Aero*)aero) -> setMaxSpeed(1000);
//    aero->move();
//    delete aero;

     Vehicle *anphi = new Amphibious("A1");
    dynamic_cast<Amphibious->move();

};
