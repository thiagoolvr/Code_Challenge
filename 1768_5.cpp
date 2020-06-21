#include <iostream>

using namespace std;


int main(){
    int N;
    while(cin >> N){
        for(int i=1; i<=N; i+=2){
            for(int j=0; j<(N-i)/2; j++){
                cout << " ";
            }
            for(int k=0; k<i; k++){
                cout << "*";
            }
            cout << endl;
        }
        for(int i=1; i<=3; i+=2){
            for(int j=0; j<(N-i)/2; j++){
                cout << " ";
            }
            for(int k=0; k<i; k++){
                cout << "*";
            }
            cout << endl;
        }
        cout << endl;
    }
}