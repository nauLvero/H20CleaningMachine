#ifndef ROLLER_HPP
#define ROLLER_HPP
#include <iostream>
using namespace std;
class Roller
{
private:
    bool isRollerOn = false;

public:
    virtual bool elementHandler(bool p_handler);
    virtual string showState();
};
#endif