#include <iostream>

int unidades, TRM, costo_dolar, costo_peso;

using namespace std;

int main() {
    cout << "Ingrese el numero de unidades: ";
    cin >> unidades;
    cout << "Ingrese la valor del dolar: ";
    cin >> TRM;

    costo_dolar = 345 + (unidades * 4.5);
    costo_peso = costo_dolar * TRM;
    cout <<"El costo total mensual en pesos es: $" << costo_peso << endl;

    return 0;
}
