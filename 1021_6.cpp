#include <iostream>
#include <string>

using namespace std;

void stringToBRL(string str, int &integer, int &cents){
    string aux = "";
    for(int i=0; i<str.length(); i++){
        if(str[i] == '.'){
            integer = stoi(aux);
            aux = "";
        }else
            aux += str[i]; 
    }
    cents = stoi(aux);
}

int main(){
    string num;
    cin >> num;

    int inteiro, centavos;
    stringToBRL(num, inteiro, centavos);

    int cedulas[] = {100, 50, 20, 10, 5, 2},
        moedas[] = {50, 25, 10, 5, 1};

    cout << "NOTAS" << endl;
    for(int i=0; i<6; i++){
        int cedula = cedulas[i];
        if(inteiro >= cedula){
            cout << inteiro/cedula << " nota(s) de R$ " << cedula << ".00" << endl;
            inteiro -= (inteiro/cedula) * cedula;
        }else
            cout << "0 nota(s) de R$ " << cedula << ".00" << endl;
    }

    cout << "MOEDAS" << endl;
    if(inteiro==1)
        cout << "1";
    else 
        cout << "0"; 
    cout << " moeda(s) de R$ 1.00" << endl;
    for(int i=0; i<5; i++){
        int moeda = moedas[i];
        if(centavos >= moeda){
            cout << centavos/moeda << " moeda(s) de R$ 0.";
            if(moeda < 10) cout << "0";
            cout << moeda << endl;
            centavos -= (centavos/moeda) * moeda;
        }else{
            cout << "0 moeda(s) de R$ 0.";
            if(moeda < 10) cout << "0";
            cout << moeda << endl;
        }
    } 
}