#include <iostream>
using namespace std;

int main(){
    float nota1, nota2, nota3, Def;

    cout <<"Digite tres notas: ";
    cin >> nota1 >> nota2 >> nota3;
    
    Def = (nota1 * 0.30) + (nota2 * 0.30) + (nota3 * 0.40);

    cout <<"La nota definitiva es: " << Def << endl;
    system("pause");

    return 0;
}