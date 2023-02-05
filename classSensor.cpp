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
    // cout << "Sensor is ";
    return isSensorOn ? "on" : "off";
};