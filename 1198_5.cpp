#include <iostream>

using namespace std;

int main(){
    long long int numAliados, numInimigos;
    long int dif;
    while(cin >> numAliados >> numInimigos){
        if(numAliados > numInimigos)
            cout << numAliados - numInimigos << endl;
        else 
            cout << numInimigos - numAliados << endl;
    }
}