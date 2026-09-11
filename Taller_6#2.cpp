#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cout <<"9 dividido 2: " << 9 / 2 << endl;
    cout <<"residuo de 17 dividido 3: " << 17 % 3 << endl;
    cout <<"tres meso (4 por 6): " << 3 * (4 + 6) << endl;
    cout <<"valor logico de 9>3 y 5<11: " << (9 > 3 && 5 < 11) << endl;
    cout <<"cubo de 11: " << 11 * 11 * 11 << endl;
    cout <<"raiz cubica de 1331: " << cbrt(1331) << endl;
    cout <<"raiz cuadrada de 25: " << sqrt(25) << endl;
    cout <<"seno de 2pi/6: " << sin(2 * M_PI / 6) << endl;
    system("pause");
    return 0;
}