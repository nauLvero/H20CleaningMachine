#include "classVelocity.hpp"
#include <iostream>
using namespace std;

void Velocity::chooseVelocity()
{
    int velocity_option;
    cout << endl;
    cout << endl;
    cout << "Wpisz predkosc szczotek (wybierz: 1-niska speed, 2-normal, 3-wysoka) " << endl;
    cout << ":";
    cin >> velocity_option;
    cout << endl;
    switch (velocity_option)
    {
    case 1:
        cout << "Predkosc szczotek - niska - " << velocity[0] << " m/min" << endl;
        break;

    case 2:
        cout << "Predkosc szczotek - normalna - " << velocity[1] << " m/min" << endl;
        break;
    case 3:
        cout << "Predkosc szczotek - wysoka - " << velocity[2] << " m/min" << endl;
        break;
    default:
        cout << "Wrong speed !! Enter value 1,2 or 3" << endl;
        break;
    };
    cout << endl;
};
