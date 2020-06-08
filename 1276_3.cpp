#include <iostream>
#include <string>

using namespace std;

void remove_spaces(string &str){
    string newString = "";
    for(int i=0; i<str.length(); i++){
        if(str[i] != ' ')
            newString += str[i];
    }
    str = newString;
}

void alpha_order(string &str){
    bool order = true;
    char aux;
    while(order){
        order = false;
        for(int i=1; i<str.length(); i++){
            if(str[i-1] > str[i]){
                aux = str[i-1];
                str[i-1] = str[i];
                str[i] = aux;
                order = true;
            } 
        }
    }
}

string faixa_letras(string str){
    if(str == "") return "";
    if(str.length() == 1) return str+":"+str;

    char inicio = str[0];
    char final = str[0];
    string faixa = "";
    for(int i=1; i<str.length(); i++){
        if(str[i] == str[i-1]|| str[i] == str[i-1] + 1){
            final = str[i];
        }else{
            faixa += inicio;
            faixa += ":";
            faixa += final;
            faixa += ", ";
            inicio = str[i];
            final = str[i];
        }

        if(i == str.length()-1){
            faixa += inicio;
            faixa += ":";
            faixa += final;
        }
    }
    return faixa;
}


int main(){
    string str;
    while(getline(cin,str)){
        remove_spaces(str);
        alpha_order(str);
        cout << faixa_letras(str) << endl;
    }
}