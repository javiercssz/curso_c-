#include <iostream>
using namespace std;

int main()
{
    double precio;
    double iva;
    double precioConIva;

    cout<<"Escriba el precio de su producto: ";
    cin>>precio;
    cout<<"\nEscriba el porcentaje de iva: ";
    cin>>iva;

    precioConIva = ((precio * iva)/100)+ precio;

    cout<<"\nEste es el precio con iva del producto -> "<<precioConIva;

    return 0;
}