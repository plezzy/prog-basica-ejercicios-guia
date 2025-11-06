#include <iostream>
using namespace std;

int main()
{
    int edad;
    cout << "Ingresa tu edad para calcular el # de pulsaciones cada 10 segundos, mientras haces ejercicio: " << endl;
    cin >> edad;
    cout << "Tus pulsaciones deberian ser de " << (220 - edad)/10 << " cada 10 segundos." << endl;

    return 0;
}