#include <iostream>

using namespace std;

int maior_numero_com_digitos_de(string num){
    char aux;
    while(true){
        bool troca = false;
        for(int i=0; i < num.length()-1; i++){
            if(num[i] < num[i+1]){
                aux = num[i];
                num[i] = num[i+1];
                num[i+1] = aux;
                troca = true;
            }
        }
        if(!troca) 
            break;
    }
    return stoi(num);
}
int menor_numero_com_digitos_de(string num){
    char aux;
    while(true){
        bool troca = false;
        for(int i=0; i < num.length()-1; i++){
            if(num[i] > num[i+1]){
                aux = num[i];
                num[i] = num[i+1];
                num[i+1] = aux;
                troca = true;
            }
        }
        if(!troca) 
            break;
    }
    return stoi(num);
}

string retifica(int X){
    string num = to_string(X);
    int length = num.length();
    if(length < 4){
        for(int i=0; i <= 4-length; i++){
            num.insert(0,"0");
        }
    }
    return num;
}

bool condicao(int X){
    string num = retifica(X);
    for(int i=0; i<num.length()-1; i++){
        for(int j=0; j<num.length()-1; j++){
            if(num[i] != num[j])
                return true;
        }
    }
    return false;
}


int krapekar(int X) {
    
    if(condicao(X) == false)
        return -1;

    int cnt = 0;
    string num;
    while (X != 6174) {
        num = retifica(X);
        int maior = maior_numero_com_digitos_de(num);
        int menor = menor_numero_com_digitos_de(num);
        X = maior - menor;
        cout << X << endl;
        cnt = cnt + 1;
    }
    return cnt;
}

int main(){
    int T, X;
    cin >> T;
    for(int i=1; i<=T; i++){
        cin >> X;
        cout << "Caso #" << i << ": " <<  krapekar(X) << endl;
    }
}