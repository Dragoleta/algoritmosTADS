#include <iostream>

using namespace std;

class Roda
{
public:
    Roda()
    {
        cout << "\nCreated!";
    }

    ~Roda() { cout << "\nDeleted!"; }
};

class Vehicle
{
    string nome;

private:
    int numRodas; // i don´t know to create a valid pointer variable
    Roda *rodas;

public:
    Vehicle(const char *param)
    {
        this->nome = string(param);
        this->rodas = NULL;
        cout << "\nCreated";
    };

    void setNumRodas(int Nrodas);
    int getNumRodas();

    ~Vehicle()
    {
        cout << "\nDeleted!";
        delete[] this->rodas;
    };
};
