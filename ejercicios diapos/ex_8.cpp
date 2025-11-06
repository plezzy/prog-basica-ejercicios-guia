#include <iostream>
using namespace std;

int main()
{
    float precio;
    cout << "Ingresa el valor del articulo que desea vender: " << endl;
    cin >> precio;
    cout << "Si desea una ganancia del 30% con respecto al precio del articulo, debe venderlo a: " << precio*1.30 << endl;
    return 0;
}