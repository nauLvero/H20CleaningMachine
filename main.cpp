#include <iostream>
#include <vector>
#include "classVelocity.hpp"
#include "classSensor.hpp"
#include "classDrive.hpp"
#include "classMachineController.hpp"
using namespace std;
int main()
{
    Drive b1, b2, b3;
    Drive r1, r2, r3;
    Sensor s1, s2, s3;
    vector<Drive> brush = {b1, b2, b3};
    vector<Drive> roller = {r1, r2, r3};
    vector<Sensor> sensor = {s1, s2, s3};
    MachineController m1(brush, roller, sensor);
    m1.chooseVelocity();
    m1.setSensorVal();
    m1.machineProgram();
    m1.showState();
    return 0;
}

// g++ -o main main.cpp classVelocity.cpp classSensor.cpp classRoller.cpp classBrush.cpp classMachineController.cpp classBrush.hpp classRoller.hpp classSensor.hpp classVelocity.hpp classMachineController.hpp