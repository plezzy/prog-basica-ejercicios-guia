#include <iostream>
using namespace std;

int main()
{
    float sueldo;
    cout << "Ingresa el valor de tu sueldo anterior: " << endl;
    cin >> sueldo;
    cout << "Tu nuevo sueldo sera: " << sueldo + (sueldo*0.25) << endl;

    return 0;
}