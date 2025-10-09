#include <iostream>
#include <cmath>

using namespace std;

int main()
{
   double d, v, r, p, L;
    
    cout << "Bienvenido al programa del Granjero Chino" << endl << "> Digite el diametro del lago (m): " << endl;
    cin >> d;
    cout << "> Digite la longitud de la parte visible del junquillo (cm): " << endl;
    cin >> v;
    r = d/2;
    p = (10000 * pow(r, 2) - pow(v, 2))/(200 * v);
    L = p + (v/100);
    if (d > 0 && v > 0 && p > 0 && (L < p + r))
    {
    	cout << "Resultados: " << endl << "- Diametro: " << d << "m" << endl << "- Junquillo visible: " << v << "cm" << endl << "- Profundidad: " << p << "m";
	}
	else
	{
		cout << "Los valores ingresados no tienen coherencia para la solucion del problema." << endl;
	}
    return 0;
}
