#include <iostream>
using namespace std;

int main()
{
    float res, suma;
    cout << "Bienvenido al programa para calcular tu nota final del curso de Introduccion a la programacion: " << endl;
    for (int i = 1; i <= 3; i++)
    {
        cout << "Ingresa la nota del parcial " << i << ": " << endl;
        cin >> res;
        suma = suma + res;
    }
    suma = (suma/3) * 0.55;
    cout << "Ingresa la nota del examen final: " << endl;
    cin >> res;
    suma = suma + res*0.30;
    cout << "Ingresa la nota del trabajo final: " << endl;
    cin >> res;
    suma = suma + res*0.15;
    cout << "Tu nota final sera de: " << suma << endl;
    return 0;
}