#include <iostream>
#include <string>
using namespace std;

int main()
{
    float inv_a, inv_b, inv_c, inv_total;
    cout << "Ingresa la inversion de la persona A: " << endl;
    cin >> inv_a;
    cout << "Ingresa la inversion de la persona B: " << endl;
    cin >> inv_b;
    cout << "Ingresa la inversion de la persona C: " << endl;
    cin >> inv_c;
    inv_total = inv_a + inv_b + inv_c;
    cout << "De la inversion, la persona A tiene el " << (inv_a*100)/inv_total << "%, la persona B tiene el " << (inv_b*100)/inv_total << "% y la persona C tiene el " << (inv_c*100)/inv_total << "%" << endl;
    return 0;
}