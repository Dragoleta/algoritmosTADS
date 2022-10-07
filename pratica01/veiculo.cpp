#include "veiculo.h"
#include <iostream>

using namespace std;

void Veiculo::setNumRodas(int Nrodas)
{
    // Rodas roda[rodas];
    this->numRodas=Nrodas;
    Roda* rodas[Nrodas]; // errado
    cout<<"\nRodas settadas";
}

int Veiculo::getNumRodas()
{
    return this->numRodas;
}
