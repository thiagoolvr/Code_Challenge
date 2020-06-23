#include <iostream>
#include <ctype.h>

using namespace std;

bool valida(string senha){
    int len = senha.length();
    if(len<6 or len>32){
        return false;
    }
    int maiscula=0, minuscula=0, numero=0;
    for(int i=0; i<len; i++){
        if( isalnum(senha[i]) ){
            maiscula += isupper(senha[i]) ? 1 : 0;
            minuscula += islower(senha[i]) ? 1 : 0;
            numero += !isalpha(senha[i]) ? 1 : 0;
        }else 
            return false;
    }
    if(maiscula>=1 and minuscula>=1 and numero>=1)
        return true;
    else 
        return false;
}

int main(){
    string senha;
    while( getline(cin, senha) ){
        if( valida(senha) )
            cout << "Senha valida." << endl;
        else
            cout << "Senha invalida." << endl;
    }
}