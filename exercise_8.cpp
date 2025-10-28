#include <iostream>
using namespace std;

int main()
{
    int contador = 0, n, aux;
    cout << "Defina el tamano del vector: " << endl;
    cin >> n;
    int vector[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Ingrese el valor del vector en la posicion (" << i+1 << "): " << endl;
        cin >> vector[i];
    };
    cout << "Tamano: " << n << endl;
    cout << "Vector A: ";
    for (int i = 0; i < n; i++)
    {
        cout << vector[i] << " ";
    };
    
    //------------------------------------------------------------------------------------
    // ORGANIZACION MAYOR A MENOR
    do
    {
        contador = 0;
        for (int i = 0; i < n; i++)
        {
            if (i != (n-1))
            {
                if (vector[i] < vector[i+1])
                {
                    aux = vector[i+1];
                    vector[i+1] = vector[i];
                    vector[i] = aux;
                    contador += 1;
                }
            }
        }
        
    } while (contador > 0);
    cout << endl << "Vector B (mayor a menor): ";
    for (int i = 0; i < n; i++)
    {
        cout << vector[i] << " ";
    }
    //------------------------------------------------------------------------------------
    // ORGANIZACION MENOR A MAYOR
    do
    {
        contador = 0;
        for (int i = 0; i < n; i++)
        {
            if (i != (n-1))
            {
                if (vector[i] > vector[i+1])
                {
                    aux = vector[i+1];
                    vector[i+1] = vector[i];
                    vector[i] = aux;
                    contador += 1;
                }
            }
        }
    } while (contador > 0);
    cout << endl << "Vector C (menor a mayor): ";
    for (int i = 0; i < n; i++)
    {
        cout << vector[i] << " ";
    }

    return 0;
}