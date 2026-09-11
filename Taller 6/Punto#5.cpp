#include <iostream>
using namespace std;

const int Pi = 3.14159265;

int radio, area;

int main() {
cout << "Ingrese el radio del circulo: ";
cin >> radio;
area = Pi * radio * radio;
cout << "El area del circulo es: " << area << endl;

return 0;
}