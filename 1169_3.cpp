#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int numTestes, numCasas;
    cin >> numTestes;
    unsigned long long int resultados[numTestes];
    for(int i=0; i<numTestes; i++){
        cin >> numCasas;
        resultados[i] = (pow(2,numCasas) - 1)/12000;
    }
    for(int i=0; i<numTestes; i++){
        cout << resultados[i] << " kg" << endl;
    }
}