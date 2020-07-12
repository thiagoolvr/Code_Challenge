#include <iostream>
#include <string>

using namespace std;

void imprime_string(string str){
    cout << str[0];
    for(int i=1; i<str.length(); i++){
        cout << " " << str[i];
    }
    cout << endl;
}

int main(){
    string str;
    while(cin >> str){
        int len = str.length();
        for(int i=0; i<len; i++){
            for(int j=0; j<i; j++){
                cout << " ";
            }
            imprime_string(str);
            str.pop_back();
        }
        cout << endl;
    }
}