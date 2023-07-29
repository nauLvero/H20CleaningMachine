#ifndef VELOCITY_HPP
#define VELOCITY_HPP
#include <string>
#include <iostream>
using namespace std;

class Velocity
{
private:
    float velocity[3] = {2, 5, 10};

public:
    void chooseVelocity();
};
#endif