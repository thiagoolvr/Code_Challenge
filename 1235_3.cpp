#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;
    string encoded;
    for(int i=0; i<n; i++){
        getline(cin,encoded);
        string decoded = "";
        int len = encoded.length();
        for(int j=len/2-1; j>=0; j--){
            decoded += encoded[j];
        }
        for(int k=len-1; k>len/2; k--){
            decoded += encoded[k];
        }
        cout << decoded << endl;
    }
}

