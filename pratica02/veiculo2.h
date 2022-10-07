#include <iostream>

using namespace std;

class Vehicle
{

protected:
    string name;

public:
    Vehicle(string name)
    {
        this->name = string(name);
    }

    string getName();
    void setName(string name);
    virtual void move();
};

class Terrestrial : public Vehicle
{

    int cap_max = 5;

public:
    Terrestrial(string name) : Vehicle(name)
    {
        this->name = string(name);
    };

    void setMaxCapacity(int cap_max);
    int getMaxCapacity();
    virtual void move();
};

class Aquatic : public Vehicle
{

    float maxLoad = 10;

public:
    Aquatic(string name) : Vehicle(name)
    {
        this->name = string(name);
    };

    void setMaxLoad(float maxLoad);
    float getMaxLoad();
    virtual void move();
};

class Aero : public Vehicle
{

    float vel_max = 100;

public:
    Aero(string name) : Vehicle(name)
    {
        this->name = string(name);
    };

    void setMaxSpeed(float vel_max);
    float getMaxSpeed();
    virtual void move();
};