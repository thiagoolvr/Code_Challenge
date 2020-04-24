#include <iostream>

using namespace std;

long long int fatorial(int n){
    if(n == 0)
        return 1;
    long long int soma = n;
    for(int i = n - 1; i>0; i--){
        soma *= i;
    }
    return soma;
}

int main(){
    int num1, num2;
    while(cin >> num1 >> num2){
        cout << fatorial(num1) + fatorial(num2) << endl;
    }
    return 0;
}