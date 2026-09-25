#include <iostream>
using namespace std;

int ancho, largo, area, valor_total;

int main() {
    cout << "Ingrese el ancho del terreno: ";
    cin >> ancho;
    cout << "Ingrese el largo del terreno: ";
    cin >> largo;
    area = ancho * largo;
    valor_total = area * 300000;
    cout << "El valor total del terreno es: $" << valor_total << endl;

return 0;
}