#include <iostream>

using namespace std;

int main(){
    char c;
    cin >> c;

    float matriz[12][12] = {0};
    float soma = 0;
    for(int i=0; i<12; i++){
        for(int j=0; j<12; j++){
            cin >> matriz[i][j];
            if(j > i)
                soma += matriz[i][j];
        }
    }

    if(c == 'M') soma /= 66;
    
    cout << soma << endl;
}