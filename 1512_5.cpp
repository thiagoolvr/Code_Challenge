#include <iostream>
#include <vector>

using namespace std;

int mmc(int n1, int n2){
    int divisor = 2;
    vector <int> divisores;
    while(n1!= 1 && n2!=1){
        if(n1%divisor == 0 || n2%divisor == 0){
            if(n1%divisor == 0)
                n1 /= divisor;
            if(n1%divisor == 0)
                n2 /= divisor;
            divisores.push_back(divisor);
        }else if(n1==1 || n2==1){
            if(n1==1)
                divisor = n2;
            else 
                divisor = n1;
        }else 
            divisor++;
    }
    int mc = 1;
    for(int i=0; i<divisores.size(); i++){
        mc *= divisores[i];
    }
    return mc;
}
int main(){
    int N, A, B;
    int numAzulejosPintados;
    int numA, numB, numAUB;
    cin >> N >> A >> B;
    while(N!=0 && A!=0 && B!=0){
        numA = N/A;
        numB = N/B;
        numAUB = N/mmc(A,B);
        numAzulejosPintados = numA + numB - numAUB;
        cout << numAzulejosPintados << endl;
        cin >> N >> A >> B;
    }
}