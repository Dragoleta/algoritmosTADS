#include <iostream>

using namespace std;

class  Veiculo {

protected:
    string name;
public:
    Veiculo(string name) {
                this->name = string(name);
    }
    
    string getName();
    void setName(string name);
};

class Terrestre : public Veiculo {

    int cap_max = 5;

public:
    Terrestre(string name) : Veiculo(string name) {
                this->name = string(name);

    };

    void setCapacidadeMax(int cap_max);
    int getCapacidadeMax();
};

class Aquatico : public Veiculo {

    float carga_max = 10;

public:
    Aquatico(string name) : Veiculo(string name) {
                this->name = string(name);
    };

    void setCargaMax(float carga_max);
    float getCargaMax();
};

class Aereo : public Veiculo {

    float vel_max = 100;

public:
    Aereo(string name) : Veiculo(string name) {
                this->name = string(name);
    };

    void setMaxSpeed(float vel_max);
    float getMaxSpeed();
};