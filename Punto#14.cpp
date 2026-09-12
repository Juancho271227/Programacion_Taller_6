#include <iostream>
using namespace std;

float km, galones, pagoGas, pagoPeaje;
int parejas;

int main(){
cout <<"Ingrese kilometraje recorridos y numero de peajes: ";
cin >> km >> parejas;
galones = km / 30.0;
pagoGas = galones * 8525;
pagoPeaje = parejas * 9600;
cout <<"Galones consimidos: " << galones  <<"  (Total: $" << pagoGas <<")"<< endl;
cout <<"Pago peaje: $" << pagoPeaje <<"  Gasto total: $" << pagoGas + pagoPeaje << endl;
return 0;
}