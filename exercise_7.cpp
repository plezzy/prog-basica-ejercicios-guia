#include <iostream>
using namespace std;

int main()
{
    int i = 0, n, vector[n];
    cout << "Defina el tamano del vector: " << endl;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cout << "Ingrese el valor del vector en la posicion (" << i+1 << "): " << endl;
        cin >> vector[i];
    };
    cout << "Tamano: " << n << endl;
    cout << "Vector A: ";
    for (i = 0; i < n; i++)
    {
        cout << vector[i] << " ";
    };
    
    return 0;
}