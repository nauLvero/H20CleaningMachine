#include <iostream>
using namespace std;

class Brush
{
private:
    bool isBrushOn = false;

public:
    Brush(){};
    bool brushSwitch()
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
int main()
{
    Brush b1, b2;
    b1.brushSwitch();
    b2.brushSwitch();
    b2.brushSwitch();
    return 0;
}