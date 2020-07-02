#include <iostream>
#include <string>
#include <ctype.h>

using namespace std;

void removeNaoNumericos(string &str){
    string removed = "";
    bool point = false;

    for(int i=0; i<str.length(); i++){
        if(str[i]=='.'){
            if(!point){
                removed += str[i];
                point = true;
            }else
                break;
        }

        if(str[i] >= '0' and str[i] <= '9'){
            removed += str[i];
        }
    }
    str = removed;
}

string extraiFloat(string &str){
    int pos = str.find(".");
    string floating_point;
    if(pos != -1){
        floating_point = str.substr(pos+1,2);
        str.erase(pos,3);
        return floating_point;
    }else 
        return "00";
}

int main(){
    string cpf, num1;
    getline(cin,cpf);
    getline(cin,num1);
    removeNaoNumericos(cpf);
    removeNaoNumericos(num1);
    
    string aux = "";
    string num2 = "";
    for(int i=0; i<cpf.length(); i++){
        if(i<11)
            aux += cpf[i];
        else 
            num2 += cpf[i];
    }
    cpf = aux;

    string f1, f2;
    f1 = extraiFloat(num1);
    f2 = extraiFloat(num2);

    cout << "cpf " << cpf << endl;
    cout << num1 << '\t' << num2 << endl;
    cout << stoi(num1)+stoi(num2) << "." << stoi(f1)+stoi(f2) << endl;
}