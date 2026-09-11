#include <iostream>
using namespace std;

const float Pi = 3.14159265;
float h, r;

int main(){
    cout <<"ingrese altura y radio: ";
    cin >> h >> r;
    cout <<"superficie total: " << (2*Pi*r*h) + (2*Pi*r*r) << endl;
    return 0;
}