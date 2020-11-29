#include <iostream>
using namespace std;

/*
* 5. Pedir al usuario que introduzca el precio de un producto y mostrar por pantalla
* el precio final del producto con el IVA añadido al precio final (21%).
* 
*/
int main()
{
    float precioProducto = 0, precioFinal = 0;

    cout << "Introduzca el precio de un producto: ";
    cin >> precioProducto;

    precioFinal = (precioProducto * 0.21) + precioProducto;

    cout << "El precio final del producto con IVA es: " << precioFinal << endl;

    return 0;
}

