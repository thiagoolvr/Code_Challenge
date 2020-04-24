#include <iostream>
#include <math.h>

using namespace std;

int somaPG(int n){
    unsigned long long int total;
    total = pow(2,n) - 1;
    return total/12000;
}

int main(){
    int numTestes, numCasas;
    cin >> numTestes;
    unsigned long long int resultados[numTestes];
    for(int i=0; i<numTestes; i++){
        cin >> numCasas;
        resultados[i] = somaPG(numCasas);
    }
    for(int j=0; j<numTestes; j++){
        cout << resultados[j] << " kg" << endl;
    }
}