#include <iostream>
#include "veiculo.h"

using namespace std;

int main()
{
    cout << "Primeira aplicacao!";

    // Vehicle veiculo1("v1");
    // {
    //     Vehicle veiculo2("v2");
    //     {
    //         Vehicle veiculo3("v3");
    //     }
    // }

    Vehicle *veiculo1 = new Vehicle("v1");
    veiculo1->setNumRodas(2);
    
    veiculo1->getNumRodas();
    delete veiculo1;
    // {
    //     Vehicle *veiculo2 = new Vehicle("v2");
    //     delete veiculo2;
    //     {
    //         Vehicle *veiculo3 = new Vehicle("v3");
    //         delete veiculo3;
    //     }
    // }
};