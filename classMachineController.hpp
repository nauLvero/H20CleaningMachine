#ifndef MACHINECONTROLLER_HPP
#define MACHINECONTROLLER_HPP
#include <iostream>
#include <vector>
#include "classVelocity.hpp"
#include "classSensor.hpp"
#include "classDrive.hpp"
using namespace std;

class MachineController : public Velocity
{
private:
    vector<Drive> m_brush;
    vector<Drive> m_roller;
    vector<Sensor> m_sensor;

public:
    MachineController(vector<Drive> p_brush, vector<Drive> p_roller, vector<Sensor> p_sensor)
    {
        m_brush = p_brush;
        m_roller = p_roller;
        m_sensor = p_sensor;
    };
    void setSensorVal();
    void machineProgram();
    void showState();
};
#endif