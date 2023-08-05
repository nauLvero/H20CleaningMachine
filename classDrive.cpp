#include <iostream>
#include "classDrive.hpp"
using namespace std;

bool Drive::elementHandler(bool p_handler)
{
    isRollerOn = p_handler;

    return isRollerOn;
};
string Drive::showState()
{
    // cout << "Roller is ";
    return isRollerOn ? "on" : "off";
};
