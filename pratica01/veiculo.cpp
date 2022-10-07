#include "veiculo.h"
#include <iostream>

using namespace std;

void Vehicle::setNumRodas(int Nrodas)
{
    // Rodas roda[rodas];
    this->numRodas = Nrodas;
    Roda *rodas[Nrodas]; // errado
    cout << "\nRodas settadas";
}

int Vehicle::getNumRodas()
{
    return this->numRodas;
}
