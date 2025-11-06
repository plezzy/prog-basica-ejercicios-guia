#include <iostream>
using namespace std;

int main()
{
    float presupuesto;
    cout << "Ingresa el valor del presupuesto: " << endl;
    cin >> presupuesto;
    cout << "El presupuesto de GINECOLOGIA sera: " << presupuesto*0.4 << endl;
    cout << "El presupuesto de TRAUMATOLOGIA sera: " << presupuesto*0.3 << endl;
    cout << "El presupuesto de PEDIATRIA sera: " << presupuesto*0.3 << endl;

    return 0;
}