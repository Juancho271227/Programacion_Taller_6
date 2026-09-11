#include <iostream>
using namespace std;
int main() {
    int pesos, dolar = 3200, euro = 3500;
    int unidades, total_dolar, total_euro;

    cout <<"ingrese el valor del articulo en pesos: ";
    cin >> pesos;
    cout <<"ingrese las unidades a comprar: ";
    cin >> unidades;

    total_dolar = (pesos * unidades) / dolar;
    total_euro = (pesos * unidades) / euro;

    cout <<endl;
    cout <<"el valor total en dolares: $" << total_dolar; 
    cout << endl;
    cout <<"el valor total en euros: $" << total_euro; 
    cout << endl;
    system("pause");

    return 0;
}