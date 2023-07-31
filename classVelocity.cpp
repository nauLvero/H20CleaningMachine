#include "classVelocity.hpp"
#include <iostream>
using namespace std;

void Velocity::chooseVelocity()
{
    string velocity_option;
    cout << endl;
    cout << endl;
    cout << "Wpisz predkosc szczotek (wybierz: 1-niska speed, 2-normal, 3-wysoka) " << endl;
    cout << ":";

    cin >> velocity_option;
    cout << endl;
    try
    {
        if (velocity_option != "1" && velocity_option != "2" && velocity_option != "3")
        {
            throw 1;
        };
    }
    catch (int num)
    {
        cout << "Niewlasciwa liczba, wpisz liczbe 1,2,3" << endl;
        chooseVelocity();
    };
    if (velocity_option == "1")
    {
        cout << "Predkosc szczotek - niska - " << velocity[0] << " m/min" << endl;
    }
    else if (velocity_option == "2")
    {
        cout << "Predkosc szczotek - normalna - " << velocity[1] << " m/min" << endl;
    }
    else if (velocity_option == "3")
    {
        cout << "Predkosc szczotek - normalna - " << velocity[1] << " m/min" << endl;
    };
};
