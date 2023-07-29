#include <iostream>
#include "classRoller.hpp"
using namespace std;

bool Roller::elementHandler(bool p_handler)
{
    isRollerOn = p_handler;

    return isRollerOn;
};
string Roller::showState()
{
    // cout << "Roller is ";
    return isRollerOn ? "on" : "off";
};
