#include <iostream>
using namespace std;

int main()
{
    float masa, presion, vol, temp;
    cout << "Digita la PRESION (atm) de la masa de aire: " << endl;
    cin >> presion;
    cout << "Digita el VOLUMEN (m3) de la masa de aire: " << endl;
    cin >> vol;
    cout << "Digita el TEMPERATURA (K) de la masa de aire: " << endl;
    cin >> temp;
    masa = (presion * vol)/(0.37 * (temp + 460));
    cout << "La masa del aire es: " << masa << " Kg" << endl;
    return 0;
}