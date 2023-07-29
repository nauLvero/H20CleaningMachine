#ifndef BRUSH_HPP
#define BRUSH_HPP
using namespace std;
#include <iostream>
#include <string>
using namespace std;

class Brush
{
private:
    bool isBrushOn = false;

public:
    bool elementHandler(bool p_handler);
    string showState();
};

#endif