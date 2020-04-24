#include <iostream>

using namespace std;

int MDC(int numero1, int numero2){
    int divisor,dividendo,resto;
    if(numero1 < numero2){
        divisor = numero2;
        dividendo = numero1;
    }else{
        divisor = numero1;
        dividendo = numero2;
    }
    resto = divisor%dividendo;
    while(resto!=0){
        divisor = dividendo;
        dividendo = resto;
        resto = divisor%dividendo;
    }
    return dividendo;
}

int main() {
    int numTestes;
    int numero1,numero2;
    cin >> numTestes;
    int resultados[numTestes];
    for(int i=0; i<numTestes; i++){
        cin >> numero1 >> numero2;
        resultados[i] = MDC(numero1,numero2);
    }
    for(int i=0; i<numTestes; i++){
        cout << resultados[i] << endl;
    }
    return 0;
}
