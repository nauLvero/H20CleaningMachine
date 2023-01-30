#include <iostream>
#include <vector>
using namespace std;

class Brush
{
private:
    bool isBrushOn = false;

public:
    Brush(){};
    virtual bool elementHandler()
    {
        isBrushOn = !isBrushOn;
        cout << "Brush";
        if (isBrushOn == true)
        {
            cout << " is on" << endl;
        }
        else
        {
            cout << " is off" << endl;
        };
        return isBrushOn;
    };
    void showBrushState()
    {
        cout << "Brush state: " << isBrushOn << endl;
    };
};
class Roller
{
private:
    bool isRollerOn = false;
    float rollerVelocity = 0; //[m/min]

public:
    virtual bool elementHandler()
    {
        isRollerOn = !isRollerOn;
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
};
class Sensor
{
private:
    ;

public:
    ;
};
class MashineController
{
private:
    vector<Brush> m_brush;

public:
    MashineController(vector<Brush> p_brush)
    {
        m_brush = p_brush;
    };
    void showBrushState()
    {
        m_brush[0].showBrushState();
    };
};

int main()
{
    Brush b1, b2;
    Roller r1;
    vector<Brush> brush = {b1, b2};
    vector<Roller> v_roller;
    vector<Sensor> v_Sensor;
    MashineController m1(brush);
    m1.showBrushState();
    // b1.elementHandler();
    // b2.elementHandler();
    // b2.elementHandler();
    // r1.elementHandler();
    return 0;
}