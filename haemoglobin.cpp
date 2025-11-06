#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    int N;
    cout << "Ingrese el numero de individuos: ";
    cin >> N;

    double *hemo = new double[N];

    for (int i = 0; i < N; ++i) 
	{
        cout << "Ingrese el indice de hemoglobina del individuo " << i + 1 << ": ";
        cin >> hemo[i];
    }

    double *susceptibles = new double[N];
    int m = 0;

    for (int i = 0; i < N; ++i) {
        if (hemo[i] >= 80.0 && hemo[i] <= 100.0) 
		{
            susceptibles[m++] = hemo[i];
        }
    }

    if (m == 0) 
	{
        cout << "\nNo hay individuos susceptibles (ninguno en el rango 80-100)." << endl;
        delete[] hemo;
        delete[] susceptibles;
        return 0;
    }

    double sum = 0.0;
    for (int i = 0; i < m; ++i) suma += susceptibles[i];
    double prom = sum / m;

    double suma_cuadrados = 0.0;
    for (int i = 0; i < m; ++i) 
	{
        double diff = susceptibles[i] - prom;
        suma_cuadrados += pow(diff, 2);
    }
    double dt = sqrt(suma_cuadrados / m);

    cout << fixed << setprecision(4);
    cout << "\nIndices de hemoglobina de individuos susceptibles a COVID-19:\n";
    for (int i = 0; i < m; ++i) 
	{
        cout << susceptibles[i] << (i + 1 < m ? "  " : "\n");
    }

    cout << "\nPromedio de hemoglobina: " << promedio << endl;
    cout << "Desviacion tipica: " << dt << endl;

    delete[] hemo;
    delete[] susceptibles;

    return 0;
}

