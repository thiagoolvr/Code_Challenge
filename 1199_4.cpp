#include <iostream>
#include <ctype.h>
#include <math.h>
#include <string>

using namespace std;


int converte_hexa(string hexa){
    int num = 0;
    int aux;
    for(int pos=hexa.length()-1, exp=0; pos>=2; pos--, exp++){
        if( isalpha(hexa[pos]) ) {
            switch(hexa[pos]){
                case 'a': aux = 10; break;
                case 'A': aux = 10; break;
                case 'b': aux = 11; break;
                case 'B': aux = 11; break;
                case 'c': aux = 12; break;
                case 'C': aux = 12; break;
                case 'd': aux = 13; break;
                case 'D': aux = 13; break;
                case 'e': aux = 14; break;
                case 'E': aux = 14; break;
                case 'f': aux = 15; break;
                case 'F': aux = 15; break;
            }
        }else{
            aux = hexa[pos] - '0';
        }
        num += aux * pow(16,exp);
    }
    return num;
}
string converte_deci(int num){
    string hexa = "";
    string aux;
    int resto;
    while(num > 0){
        resto = num % 16;
        if(resto>9){
            switch(resto){
                case 10: aux = 'A'; break;
                case 11: aux = 'B'; break;
                case 12: aux = 'C'; break;
                case 13: aux = 'D'; break;
                case 14: aux = 'E'; break;
                case 15: aux = 'F'; break;
            }
        }else{
            aux = to_string(resto);
        }
        hexa.insert(0,aux);
        num /= 16;
    }
    return "0x" + hexa;
}
int main(){
    string num;
    cin >> num;
    while(num[0] != '-'){
        if(num[1] == 'x')
            cout << converte_hexa(num) << endl;
        else
            cout << converte_deci(stoi(num)) << endl;
        cin >> num; 
    }
}