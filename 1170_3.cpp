#include <iostream>

using namespace std;

int diasComSuprimento(double suprimento){
    int dias = 0;
    while(suprimento > 1){
        suprimento /= 2;
        dias++;
    }
    return dias;
}

int main(){
    int numTestes;
    cin >> numTestes;
    double suprimento;
    int resultados[numTestes];
    for(int i=0; i<numTestes; i++){
        cin >> suprimento;
        resultados[i] = diasComSuprimento(suprimento);
    }
    for(int j=0; j<numTestes; j++){
        cout << resultados[j] << " dias" << endl;
    }
}