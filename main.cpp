#include <iostream>
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
        cout << "Brush :";
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
};
class Roller
{
private:
    bool isRollerOn = false;

public:
    virtual bool elementHandler()
    {
        isRollerOn = !isRollerOn;
        cout << "Roller :";
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
int main()
{
    Brush b1, b2;
    Roller r1;
    b1.elementHandler();
    b2.elementHandler();
    b2.elementHandler();
    r1.elementHandler();
    return 0;
}