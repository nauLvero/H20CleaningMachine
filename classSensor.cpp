#include "file.hpp"
#include <iostream>
using namespace std;

bool Sensor::elementHandler(bool p_handler)
{
    isSensorOn = p_handler;
    return isSensorOn;
};
string Sensor::showState()
{

    return isSensorOn ? "on" : "off";
};