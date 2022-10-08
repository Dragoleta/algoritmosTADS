#include <iostream>

using namespace std;

class Vehicle
{

protected:
    string name;

public:
    Vehicle(const char *n)
    {
        this->name = string(name);
    }

    virtual string getName();
    virtual void setName(string name);
    virtual void move() = 0;

    virtual ~Vehicle() { };
};

class Terrestrial : public virtual Vehicle
{

    int cap_max = 5;
protected:
    Terrestrial() : Vehicle("v"){};

public:
    virtual ~Terrestrial (){};

    void setMaxCapacity(int cap_max);
    int getMaxCapacity();
    virtual void move();

};

class Aquatic : public Vehicle
{

    float maxLoad = 10;
protected:
    Aquatic() : Vehicle("v"){  };
public:

    virtual ~Aquatic() { };

    void setMaxLoad(float maxLoad);
    float getMaxLoad();
    virtual void move();
};

class Aero : public virtual Vehicle
{

    float vel_max = 100;

protected:
    Aero() : Vehicle("V"){};

public:

    void setMaxSpeed(float vel_max);
    float getMaxSpeed();
    virtual void move();

    virtual ~Aero() { };
};


class Amphibious : public Terrestrial, public Aquatic {
	Amphibious (const char * nome) : Vehicle(), Terrestrial(), Aquatic() {}
};
