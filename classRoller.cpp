#include "file.hpp"
#include <iostream>
using namespace std;

bool Brush::elementHandler(bool p_handler)
{
    isBrushOn = p_handler;
    return isBrushOn;
};
string Brush::showState()
{
    // cout << "Brush is ";
    return isBrushOn ? "on" : "off";
};

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
