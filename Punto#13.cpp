#include <iostream>
using namespace std;

int valor;

int main (){
    cout <<"Ingrese el valor comercial del vehiculo: $";
    cin >> valor;
    cout <<"Impuesto a pagar: $" << valor * 0.025 << endl;
    return 0;
}