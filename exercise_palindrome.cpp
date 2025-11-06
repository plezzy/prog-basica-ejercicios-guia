#include <iostream>
#include <cstring> 
// para usar strlen()
#include <cctype>
// para usar isdigit() y tolower()
using namespace std;

int main() {
    char A[100];
	// se declara con un máximo de caractéres
    bool palindrome = true;
    bool number = true;

    cout << "Ingrese una palabra o un numero: " << endl;
    cin >> A;

    int n = strlen(A);

    for (int i = 0; i < n; i++) 
	{
        if (!isdigit(A[i])) 
		{
            number = false;
            break;
        }
    }

    // comparar caracteres desde los extremos
    for (int i = 0; i < n / 2; i++) 
	{
        char left = tolower(A[i]);
        char right = tolower(A[n - 1 - i]);

        if (right != left) {
            palindrome = false;
            break;
        }
    }

    if (number) {
        if (palindrome)
            cout << "El numero " << A << " es capicua." << endl;
        else
            cout << "El numero " << A << " no es capicua." << endl;
    } else {
        if (palindrome)
            cout << "La palabra \"" << A << "\" es palindroma." << endl;
        else
            cout << "La palabra \"" << A << "\" no es palindroma." << endl;
    }

    return 0;
}

