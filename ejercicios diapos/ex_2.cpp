#include <iostream>
using namespace std;

int main()
{
    float m, h, total;
    cout << "Ingresa la cantidad de estudiantes HOMBRES en el Curso de Algoritmos: " << endl;
    cin >> h;
    cout << "Ingresa la cantidad de estudiantes MUJERES en el Curso de Algoritmos: " << endl;
    cin >> m;
    total = h + m;
    h = h/total;
    m = m/total;
    cout << "En el curso: el " << h*100 << "% son hombres y el " << m*100 << "% son mujeres." << endl;
    return 0;
}