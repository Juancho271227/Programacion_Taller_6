#include <iostream>
using namespace std;

float precio, total, iva, neto;
int cant;

int main(){
    cout <<"Ingrese precio y cantidad: ";
    cin >> precio >> cant;
    total = precio * cant;
    iva = total * 0.19;
    neto = total + iva;
    cout <<"Precio: $" << precio << "  Cantidad: " << cant << endl;
    cout <<"Subtotal: $" << total << "  IVA: $" << iva << "  Neto: $" << neto << endl;
    return 0;
}