#ifndef SENSOR_HPP
#define SENSOR_HPP
#include <iostream>
using namespace std;

class Sensor
{
private:
    bool isSensorOn = 0;

public:
    bool elementHandler(bool p_handler);
    string showState();
};
#endif