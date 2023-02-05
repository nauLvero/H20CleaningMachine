#ifndef FILE_HPP_
#define PLIK_HPP_
#include <string>
#include <iostream>

using namespace std;

// class Test
// {
// private:
//     int test;

// public:
//     void showTest(int p_test);
// };

//
class Velocity
{
private:
    float velocity[3] = {2, 5, 10};

public:
    void chooseVelocity();
};
class Brush
{
private:
    bool isBrushOn = false;

public:
    virtual bool elementHandler(bool p_handler);
    virtual string showState();
};

class Roller
{
private:
    bool isRollerOn = false;

public:
    virtual bool elementHandler(bool p_handler);
    virtual string showState();
};
class Sensor
{
private:
    bool isSensorOn;

public:
    virtual bool elementHandler(bool p_handler);
    virtual string showState();
};
#endif