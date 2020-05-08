#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int binary(string bin){
    int sum = 0;
    for(int pos=bin.size()-1, exp=1; pos>=0; pos--, exp*=2){
        sum += (bin[pos] - '0') * exp;
    }
    return sum;
}
double fibo_direto(int n){
    double a,b,c;
    a = 1/sqrt(5);
    b = (1+sqrt(5))/2;
    c = (1-sqrt(5))/2;
    return a * ( pow(b,n) - pow(c,n) );
}
int fibo_iterativo(int n){
    int penultimo = 0;
    int ultimo = 1;
    int atual;
    for(int i=1; i<n; i++){
        atual = penultimo + ultimo;
        penultimo = ultimo;
        ultimo = atual;
    }
    return ultimo;
}
int main(){
    int numInstances;
    cin >> numInstances;
    string bin;
    int num;
    for(int i=0; i<numInstances; i++){
        cin >> bin;
        num = stoull(bin,0,2);
        if(num<17)
            cout << setfill('0') << setw(3) << fibo_iterativo(num) << endl;
        else 
            cout << setfill('0') << setw(3) << fibo_direto(num) << endl;
    }
}