#include <iostream>

using namespace std;

void sequencia(int n){
    int count = 1;
    string seq = "0 ";
    for(int i=0; i<=n; i++){
        for(int j=0; j<i; j++){
            seq += to_string(i);
            seq += " ";
            count ++;
        }
    }
    seq.pop_back();

    cout << count;
    if(count > 1)
        cout << " numeros" << endl;
    else 
        cout << " numero" << endl;

    cout << seq << endl;
}

int main(){
    int n, count=1;
    while(cin>>n){
        cout << "Caso " << count << ": ";
        sequencia(n);
        cout << endl;
        count++;
    }
}