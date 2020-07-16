#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    cout << n << endl;

    int notas[] = {100, 50, 20, 10, 5, 2, 1};
    for(int i=0; i<7; i++){
        if(n >= notas[i]){
            cout << n/notas[i] << " nota(s) de R$ " << notas[i] << ",00" << endl;
            n -= (n/notas[i]) * notas[i];
        }else
            cout << "0 nota(s) de R$ " << notas[i] << ",00" << endl;
    }
}