#include <iostream>

using namespace std;

class Vehicle
{

protected:
    string name;

public:
    Vehicle(const char *n, string name)
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
    Terrestrial() : Vehicle("T",name){};

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
    Aquatic() : Vehicle("A", name){  };
public:

    virtual ~Aquatic() { };

    void setMaxLoad(float maxLoad);
    float getMaxLoad();
    virtual void move();
};

class Flyer : public virtual Vehicle
{

    float vel_max = 100;

protected:
    Flyer() : Vehicle("F", name){};

public:

    void setMaxSpeed(float vel_max);
    float getMaxSpeed();
    virtual void move();

    virtual ~Flyer() { };
};


class Amphibious : public Terrestrial, public Aquatic {
	Amphibious (const char * name) : Vehicle("V", name), Terrestrial(), Aquatic() {}

    
};
