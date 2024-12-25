#include <iostream>
using namespace std;

int main()
{
    double a, b, c, d, resultado = 0;

    cout << "Escribe un numero para resolver el problema: \n";
    cin >> a;
    cout << "Escribe otro numero: \n";
    cin >> b;
    cout << "Escribe otro numero: " << endl;
    cin >> c;
    cout << "Escribe otro numero: " << endl;
    cin >> d;

    resultado = (a + b) / (c + d);

    cout.precision(2);

    cout << "El resultado de la operacion es: " << resultado << endl;

    return 0;
}