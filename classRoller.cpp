#include "file.hpp"
#include <iostream>
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
