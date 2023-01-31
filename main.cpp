#include <iostream>
#include <vector>
#include "file.hpp"
using namespace std;

class Velocity
{
private:
    float velocity[3] = {2, 5, 10};

public:
    void chooseVelocity()
    {
        int velocity_option;
        cout << "Choose roller speed, enter value 1,2,3 (1-low speed, 2-normal, 3-high) " << endl;
        cout << ":";
        cin >> velocity_option;
        cout << endl;
        switch (velocity_option)
        {
        case 1:
            cout << "Roller speed high " << velocity[0] << " m/min" << endl;
            break;

        case 2:
            cout << "Roller speed normal" << velocity[1] << " m/min" << endl;
            break;
        case 3:
            cout << "Roller speed low" << velocity[2] << " m/min" << endl;
            break;
        default:
            cout << "Wrong speed !! Enter value 1,2 or 3" << endl;

            break;
        }
        cout << endl;
    };
};

class Brush
{
private:
    bool isBrushOn = false;

public:
    Brush(){};
    virtual bool elementHandler(bool p_handler)
    {
        isBrushOn = p_handler;
        return isBrushOn;
    };
    virtual string showState()
    {
        // cout << "Brush is ";
        return isBrushOn ? "on" : "off";
    };
};
class Roller
{
private:
    bool isRollerOn = false;

public:
    virtual bool elementHandler(bool p_handler)
    {
        isRollerOn = p_handler;

        return isRollerOn;
    };
    virtual string showState()
    {
        // cout << "Roller is ";
        return isRollerOn ? "on" : "off";
    };
};
class Sensor
{
private:
    bool isSensorOn;

public:
    virtual bool elementHandler(bool p_handler)
    {
        isSensorOn = p_handler;
        return isSensorOn;
    };
    virtual string showState()
    {
        // cout << "Sensor is ";
        return isSensorOn ? "on" : "off";
    };
};

class MachineController : public Velocity
{
private:
    vector<Brush> m_brush;
    vector<Roller> m_roller;
    vector<Sensor> m_sensor;

public:
    MachineController(vector<Brush> p_brush, vector<Roller> p_roller, vector<Sensor> p_sensor)
    {
        m_brush = p_brush;
        m_roller = p_roller;
        m_sensor = p_sensor;
    };
    void setSensorVal()
    {
        for (int i = 0; i < m_sensor.size(); i++)
        {
            bool sensorVal;
            cout << "Enter sensor " << i + 1 << " value (0 or 1):";
            cin >> sensorVal; ///  try  catch to add
            cout << endl;
            m_sensor[i].elementHandler(sensorVal);
        };
    };
    void machineProgram()
    {
        for (int i = 0; i < m_sensor.size(); i++)
        {
            if (m_sensor[i].showState() == "on")
            {
                m_roller[i].elementHandler(true);
                m_brush[i].elementHandler(true);
                if (i == (m_sensor.size() - 2))
                {
                    m_roller[i + 1].elementHandler(true);
                    m_brush[i + 1].elementHandler(true);
                    break;
                };
            }
            else if (m_sensor[i].showState() == "off")
            {
                m_roller[i].elementHandler(false);
                m_brush[i].elementHandler(false);
            };
        };
    };

    virtual void showState()
    {
        for (int i = 0; i < m_sensor.size(); i++)
        {
            cout << "Sensor number " << i + 1 << ": ";
            cout << m_sensor[i].showState() << endl;
            cout << "Brush number " << i + 1 << ": ";
            cout << m_brush[i].showState() << endl;
            cout << "Roller numeber " << i + 1 << ": ";
            cout << m_roller[i].showState() << endl;
            cout << endl;
        };
    };
};

int main()
{
    Brush b1, b2, b3;
    Roller r1, r2, r3;
    Sensor s1, s2, s3;
    vector<Brush> brush = {b1, b2, b3};
    vector<Roller> roller = {r1, r2, r3};
    vector<Sensor> sensor = {s1, s2, s3};
    MachineController m1(brush, roller, sensor);
    m1.chooseVelocity();
    m1.setSensorVal();
    m1.machineProgram();
    m1.showState();

    // Test t1;
    // t1.showTest(5);
    return 0;
}