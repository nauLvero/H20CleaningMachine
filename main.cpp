#include <iostream>
#include <vector>
#include "file.hpp"
using namespace std;

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
            cout << "Wpisz wartosc na czujniku " << i + 1 << " (0 lub 1):";
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
        cout << endl;
        cout << endl;
        for (int i = 0; i < m_sensor.size(); i++)
        {
            cout << "Czujnik numer " << i + 1 << ": ";
            cout << m_sensor[i].showState() << endl;
            cout << "Szczotka numer " << i + 1 << ": ";
            cout << m_brush[i].showState() << endl;
            cout << "Walek napedowy numer " << i + 1 << ": ";
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