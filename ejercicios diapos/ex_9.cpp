#include <iostream>
#include <string>
using namespace std;

int main()
{
    float t_l, t_m, t_v;
    cout << "Ingresa el tiempo cronometrado del LUNES (minutos): " << endl;
    cin >> t_l;
    cout << "Ingresa el tiempo cronometrado del MIERCOLES (minutos): " << endl;
    cin >> t_m;
    cout << "Ingresa el tiempo cronometrado del VIERNES (minutos): " << endl;
    cin >> t_v;
    cout << "El tiempo promedio para recorrer la ruta es: " << (t_l + t_m + t_v)/3 << " minutos" << endl;
    return 0;
}