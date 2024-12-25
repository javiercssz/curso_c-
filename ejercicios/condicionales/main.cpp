#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int a, b, resultado, veces, asteriscos;

    cout << "Escribe dos numeros, si el primero es más grande que el segundo, se restan y si no se suman: ";
    cin >> a >> b;

    if (a > b)
    {
        resultado = a - b;
    }
    else
    {
        resultado = a + b;
    }

    cout << "\n¿Cuantas veces quieres que se imprima? \n";
    cin >> veces;

    for (int i = 0; i < veces; i++)
    {
        cout << "el resultado es: " << resultado << endl;
    }

    /*En este programa le voy a pedir un numero al usuario y segun el numero que me de es el maximo de asteriscos
    que voy a usar para completar mi triangulo equilatero*/

    cout << "¿De cuantos asteriscos quieres tu triangulo? " << endl;
    cin >> asteriscos;

    for (int i = 0; i < asteriscos; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    _getch();
    return 0;
}