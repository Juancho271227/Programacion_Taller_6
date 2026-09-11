#include <iostream>
using namespace std;

float celsius;

int main(){
    cout <<"Ingrese la temperatura en grados Celsius: ";
    cin >> celsius;
    cout <<"La temperatura en grados Fahrenheit es: " << (celsius * 9.0/5.0) + 32 << endl;
    return 0;
}