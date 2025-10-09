#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float a = 0;
	float b;
	float base;
	double h;
	double ha;
	double hb;
	
	cout << "Bienvenido al problema del Ingeniero y el Pozo" << endl << endl << "Ingresa la longitud de la varilla A en centimetros: " << endl;
	cin >> a;
	cout << "Ingresa la longitud de la varilla B en centimetros: " << endl;
	cin >> b;
	cout << "Ingresa la longitud de la base del pozo en metros: " << endl;
	cin >> base;
	a = a / 100;
	b = b / 100;
	if (base < a and base < b and a > 0 and b > 0 and base > 0)
	{
		ha = sqrt(pow(a, 2) - pow(base, 2));
		hb = sqrt(pow(b, 2) - pow(base, 2));
		h = (ha * hb)/(ha + hb);
		cout << "La altura de interseccion entre ambas varillas es " << h << " metros" << endl << "El problema conto con los siguientes parametros: Varilla A " << a*100 << " cm, Varilla B " << b*100 << " cm y la Base del Pozo " << base << " metros" << endl;
	}
	else
	{
		cout << "No hay interseccion debido a que la Base es menor o igual a A y B; por tanto, no hay altura de interseccion.";
	}
	
	return 0;
}

