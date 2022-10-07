#include <iostream>
#include "veiculo.h"

using namespace std;

int main()
{
    cout << "Primeira aplicacao!";

    // Veiculo veiculo1("v1");
    // {
    //     Veiculo veiculo2("v2");
    //     {
    //         Veiculo veiculo3("v3");
    //     }
    // }

    Veiculo *veiculo1 = new Veiculo("v1");
    veiculo1->setNumRodas(2);
    // veiculo1->getNumRodas();
    delete veiculo1;
    // {
    //     Veiculo *veiculo2 = new Veiculo("v2");
    //     delete veiculo2;
    //     {
    //         Veiculo *veiculo3 = new Veiculo("v3");
    //         delete veiculo3;
    //     }
    // }
};