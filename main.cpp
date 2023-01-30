#include <iostream>
#include <vector>
using namespace std;

class Brush
{
private:
    bool isBrushOn = false;

public:
    Brush(){};
    virtual bool elementHandler(bool p_handler)
    {
        isBrushOn = !isBrushOn;
        cout << "Brush";
        if (isBrushOn == true)
        {
            cout << " turned on" << endl;
        }
        else
        {
            cout << " turned off" << endl;
        };
        return isBrushOn;
    };
    virtual bool showState()
    {
        if (isBrushOn)
        {
            cout << "Brush is on" << endl;
        }
        else
        {
            cout << "Brush is off" << endl;
        };
        return isBrushOn;
    };
};
class Roller
{
private:
    bool isRollerOn = false;
    float rollerVelocity = 0; //[m/min]

public:
    virtual bool elementHandler(bool p_handler)
    {
        isRollerOn = p_handler;
        cout << "Roller";
        if (isRollerOn == true)
        {
            cout << " is on" << endl;
        }
        else
        {
            cout << " is off" << endl;
        };
        return isRollerOn;
    };
    virtual bool showState()
    {
        return isRollerOn;
    };
};
class Sensor
{
private:
    bool isSensorOn = true;

public:
    virtual bool elementHandler(bool p_handler)
    {
        isSensorOn = p_handler;
        return isSensorOn;
    };
    virtual bool showState()
    {
        if (isSensorOn)
        {
            cout << "Sensor is on" << endl;
        }
        else
            cout << "Sensor is off" << endl;
        return isSensorOn;
    };
};
class MachineController
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

    void machineProgram()
    {
        vector<Sensor>::iterator it_1 = m_sensor.begin();
        for (it_1; it_1 != m_sensor.end(); it_1++)
        {
            cout << "Wywolano petle" << (*it_1).showState() << endl;
        };

        if (m_sensor[0].showState())
        {

            m_brush[0].elementHandler(true);
            m_roller[0].elementHandler(true);
        }
        else if (!m_sensor[0].showState())
        {
            m_brush[0].elementHandler(false);
            m_roller[0].elementHandler(false);
        }
        else
        {
            cout << "Error - check Sensor 1" << endl;
        }
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
    m1.machineProgram();
    // b1.elementHandler();
    // b2.elementHandler();
    // b2.elementHandler();
    // r1.elementHandler();
    return 0;
}