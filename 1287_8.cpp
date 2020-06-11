#include <iostream>
#include <ctype.h>
#include <string>
#include <sstream>
#include <stdexcept>

using namespace std;

void removeCaracteresInvalidos(string &str){
    string new_str = "";
    for(int i=0; i<str.length(); i++){
        if(str[i]!=' ' && str[i]!=',')
            new_str += str[i];
    }
    str = new_str;
}

void verifcaErrosPrevistos(string &str){
    for(int i=0; i<str.length(); i++){
        if(str[i]=='O' || str[i]=='o')
            str[i] = '0';
        else if(str[i]=='l')
            str[i] = '1';
    }
}

string validaEntrada(string str){
    removeCaracteresInvalidos(str);
    verifcaErrosPrevistos(str);
    
    //verifica vazio
    if(str == "") return "error";

    //verifica preseneça de caracteres
    for(int i=0; i<str.length(); i++){
        if(str[i]<48 || str[i]>57)
            return "error";
    }

    //verifica overflow
    try{
        int num = stoi(str);
        return to_string(num);
    }catch(exception &err){
        return "error";
    }
}

int main(){
    string str;
    while(getline(cin,str)){
        cout << validaEntrada(str) << endl;
    }
}