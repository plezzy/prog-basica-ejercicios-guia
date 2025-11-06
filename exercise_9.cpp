#include <iostream>
#include <cmath>
using namespace std;

int cuadrado(int a)
{
    return pow(a, 2);
}
int cubo(int a)
{
    return pow(a, 3);
}

int main()
{
    cout << "Estos son los cuadrados y los cubos de los números enteros del 1 al 100: " << endl;
    cout << "Entero - Cuadrado - Cubo" << endl;
    for (int i = 1; i <= 100; i++)
    {
        cout << "  " << i << "  -    " << cuadrado(i) << "    -  " << cubo(i) << "  " << endl;
    }
}