#include <iostream>

using namespace std;

void reduz_fracao(int* n1, int* n2){
    int div = 2;
    int count = 0;
    while(*n1!=1 && *n2!=1){
        if(*n1%div==0 && *n2%div==0){
            *n1 /= div;
            *n2 /= div;
        }else
            div++;
        if(count > 25)
            break;
        count ++;
    }
}

int main(){
    int n, m;
    cin >> n >> m;
    while(n!=0 && m!=0){
        int soma = 0;
        int bilhetes[n];
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin >> bilhetes[i];
            }
            soma += bilhetes[i];
        }
        int aux;
        for(int i=0; i<n; i++){
            aux = soma;
            reduz_fracao(&bilhetes[i], &aux);
            cout << bilhetes[i] << " / " << aux << endl;
        }
        cin >> n >> m;
    }
}