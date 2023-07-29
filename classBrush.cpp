#include <iostream>
#include "classBrush.hpp"
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
