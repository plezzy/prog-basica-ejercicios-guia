/* Este codigo ha sido generado por el modulo psexport 20180802-w32 de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

#include<stdio.h>
#include<math.h>

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
	printf("Ingrese el valor del capital inicial: \n");
	scanf("%f",&c);
	printf("Ingrese la tasa de interes nominal anual: \n");
	scanf("%f",&i1);
	while (n<0) {
		printf("Ingrese el numero de a�os que durar� la inversi�n: \n");
		scanf("%i",&n);
	}
	printf("Ingrese el sistema o periodo de capitalizaci�n de los intereses (1. Mensual 2. Trimestral, 3. Semestral, 4. Anual): \n");
	scanf("%i",&p);
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
		printf("Opci�n inv�lida, finalizando programa.\n");
	} else {
		n1 = n*p;
		i = (i1/p);
		if (n!=0) {
			vf = c*pow((1+i),n1);
		} else {
			vf = c;
		}
		printf("Capital inicial (C): %f | La tasa de inter�s nominal anual (I): %f | Tasa de inter�s efectiva (i): %f | Tiempo de la inversi�n en a�os (n): %i | Periodos capitalizables de la inversi�n (N): %i | Periodos capitalizables en un a�o (p): %i | El capital final en la inversi�n ser� (VF): %f\n",c,i1,i,n,n1,p,vf);
	}
	return 0;
}

