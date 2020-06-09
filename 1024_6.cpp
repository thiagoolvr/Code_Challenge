#include <iostream>
#include <ctype.h>
#include <string>

using namespace std;

void criptografia(string &str){
    for(int i=0; i<str.length(); i++){
        if(isalpha(str[i]))
            str[i] = str[i] + 3;
    }

    string inverted_str = "";
    for(int i=str.length()-1; i>=0; i--){
        inverted_str += str[i];
    }
    str = inverted_str;

    for(int i=str.length()/2; i<str.length(); i++){
        str[i] = str[i] - 1;
    }
}

int main(){
    int N;
    cin >> N;
    cin.ignore();
    string str;
    for(int i=0; i<N; i++){
        getline(cin,str);
        criptografia(str);
        cout << str << endl;
    }
}