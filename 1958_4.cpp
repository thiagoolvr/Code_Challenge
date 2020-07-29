#include <iostream>
#include <string>

using namespace std;

bool numValido(char n){
    return n != '0' and n != '.' and n != '-';
}

int main(){
    string str;
    cin >> str;

    string num = "";

    int pos;
    for(int i=0; i<str.length(); i++){
        if( numValido(str[i]) ){
            pos = i;
            break;
        }
    }


    for(int i=pos; i<str.length() and num.length()<5; i++){
        if(str[i] != '.')
            num += str[i];
    }
    while(num.length() < 5){
        num += "0";
    }
    num.insert(num.begin()+1, '.');


    if(str[0] == '-'){
        cout << "-";
        str.erase(0,1);
    }
    else 
        cout << "+";

    cout << num << "E";

    if(str.find('.') == -1)
        str.insert(str.end(),'.');


    int exp;
    if(str.find('.') > pos)
        exp = str.find('.') - pos - 1;
    else
        exp = str.find('.') - pos + 1;

    if(exp < 0)
        cout << "-";
    else
        cout << "+";
        
    if(abs(exp) < 10) cout << "0";
    cout << abs(exp) << endl;
}