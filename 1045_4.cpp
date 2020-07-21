#include <iostream>

using namespace std;

void ordena(double &a, double &b, double &c){
    double *maior, aux;

    if(b > c)
        maior = &b;
    else 
        maior = &c;

    if(a < *maior){
        aux = a;
        a = *maior;
        *maior = aux;
    } 
}

int main(){
    double a, b, c;
    cin >> a >> b >> c;
    ordena(a, b, c);

    if(a >= b + c) 
        cout << "NAO FORMA TRIANGULO" << endl;
    else if(a*a == b*b + c*c)
        cout << "TRIANGULO RETANGULO" << endl;
    else if(a*a > b*b + c*c) 
        cout << "TRIANGULO OBTUSANGULO" << endl;
    else 
        cout << "TRIANGULO ACUTANGULO" << endl;

    if(a == b and b == c)
        cout << "TRIANGULO EQUILATERO" << endl;
    else if(a == b or b == c or a == c)
        cout << "TRIANGULO ISOSCELES" << endl;
}