#include <iostream>
using namespace std;

int largo, ancho, prof, costo = 2150;

int main(){
cout <<"ingrese largo, ancho y profundidad: ";
cin >> largo >> ancho >> prof;
cout <<"Total a pagar: $" << (largo * ancho * prof) * costo << endl;
system("pause");

return 0;
}