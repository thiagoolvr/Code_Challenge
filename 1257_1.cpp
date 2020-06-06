#include <iostream>
#include <string>

using namespace std;

int main(){
    int numTestes;
    cin >> numTestes;
    int numEntradas;
    int hash;
    string str;

    for(int i=0; i<numTestes; i++){
        cin >> numEntradas;
        hash = 0;
        for(int j=0; j<numEntradas; j++){
            cin >> str;
            for(int k=0; k<str.length(); k++){
                hash += (str[k] - 'A') + j + k;
            }
        }
        cout << hash << endl;
    }
}