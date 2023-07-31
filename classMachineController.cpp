#include <iostream>
#include "classMachineController.hpp"
using namespace std;

void MachineController::setSensorVal()
{
    for (int i = 0; i < m_sensor.size(); i++)
    {
        string sensorInput;
        cout << "Wpisz wartosc na czujniku " << i + 1 << " (0 lub 1):";
        cin >> sensorInput;
        try
        {
            if (sensorInput != "0" && sensorInput != "1")
            {
                throw 1;
            };
        }
        catch (int exp)
        {
            cout << "Nieprawidlowa wartosc, wpisz 1 lub 0" << endl;
            i--;
                }
        ///  try  catch to add
        if (sensorInput == "1")
        {
            m_sensor[i].elementHandler(true);
        }
        else if (sensorInput == "0")
        {
            m_sensor[i].elementHandler(false);
        };
    };
};
void MachineController::machineProgram()
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

void MachineController::showState()
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