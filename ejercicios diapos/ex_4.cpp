#include <iostream>
using namespace std;

int main()
{
    float pesos, dolar, cambio;
    cout << "Ingrese cuanto equivale 1 dolar en pesos colombianos: " << endl;
    cin >> dolar;
    cout << "Ingrese los pesos combianos para pasar a dolares: " << endl;
    cin >> pesos;
    cout << pesos << " COP a dolares es: " << pesos/dolar << " $ ";

    return 0;
}