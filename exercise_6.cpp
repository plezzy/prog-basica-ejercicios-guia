// Este codigo ha sido generado por el modulo psexport 20180802-w32 de PSeInt.
// Es posible que el codigo generado no sea completamente correcto. Si encuentra
// errores por favor reportelos en el foro (http://pseint.sourceforge.net).

#include<iostream>
#include<cmath>
using namespace std;

// Para leer variables de texto se utiliza el operador << del objeto cin, que
// lee solo una palabra. Para leer una linea completa (es decir, incluyendo los
// espacios en blanco) se debe utilzar getline (ej, reemplazar cin>>x por
// getline(cin,x)), pero obliga a agregar un cin.ignore() si antes del getline
// se ley� otra variable con >>.

int main() {
	float c;
	float i;
	float i1;
	int n;
	int n1;
	int p;
	float vf;
	n1 = 0;
	n = -1;
	i1 = 0;
	cout << "Ingrese el valor del capital inicial: " << endl;
	cin >> c;
	cout << "Ingrese la tasa de interes nominal anual: " << endl;
	cin >> i1;
	while (n<0) {
		cout << "Ingrese el numero de a�os que durar� la inversi�n: " << endl;
		cin >> n;
	}
	cout << "Ingrese el sistema o periodo de capitalizaci�n de los intereses (1. Mensual 2. Trimestral, 3. Semestral, 4. Anual): " << endl;
	cin >> p;
	switch (p) {
	case 1:
		p = 12;
		break;
	case 2:
		p = 4;
		break;
	case 3:
		p = 2;
		break;
	case 4:
		p = 1;
		break;
	default:
		p = 0;
	}
	if (p==0) {
		cout << "Opci�n inv�lida, finalizando programa." << endl;
	} else {
		n1 = n*p;
		i = (i1/p);
		if (n!=0) {
			vf = c*pow((1+i),n1);
		} else {
			vf = c;
		}
		cout << "Capital inicial (C): " << c << " | La tasa de inter�s nominal anual (I): " << i1 << " | Tasa de inter�s efectiva (i): " << i << " | Tiempo de la inversi�n en a�os (n): " << n << " | Periodos capitalizables de la inversi�n (N): " << n1 << " | Periodos capitalizables en un a�o (p): " << p << " | El capital final en la inversi�n ser� (VF): " << vf << endl;
	}
	return 0;
}

