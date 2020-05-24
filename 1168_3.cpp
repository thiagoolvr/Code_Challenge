#include <iostream>
#include <map>

using namespace std;

int main(){
    map <char,int> led = { {'1',2}, {'2',5}, {'3',5}, {'4',4}, {'5',5}, {'6',6}, {'7',3}, {'8',7}, {'9',6}, {'0',6} };
    int N;
    cin >> N;
    string V;
    unsigned long long int soma;
    for(int i=0; i<N; i++){
        cin >> V;
        soma = 0;
        for(int j=0; j<V.length(); j++){
            soma += led[ V[j] ];
        }
        cout << soma << " leds" << endl;
    }
    return 0;
}