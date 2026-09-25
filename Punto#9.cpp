#include <iostream>
using namespace std;

int num;
 int main (){
    cout << "Ingrese un numero (10-99): ";
    cin >> num;
    cout <<"suma de los digitos: " << (num / 10) + (num % 10) << endl;
    return 0;
}