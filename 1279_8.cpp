#include <iostream>
#include <string>

using namespace std;

int main(){
    long int ano;
    string ano_str, final_str;
    bool bissexto;
    bool primeiraLinha = true;

    while(cin >> ano_str){
        if(ano_str.length() > 9){
            final_str = ano_str.substr(ano_str.length()-9,9);
            ano = stoi(final_str);
        }else 
            ano = stoi(ano_str);
        
        if(!primeiraLinha)
            cout << endl;

        bissexto = (ano%4==0 && ano%100!=0) || ano%400==0;

        if(bissexto){
            cout << "This is leap year." << endl;
            if(ano%15 == 0)
                cout << "This is huluculu festival year." << endl;
            if(ano%55 == 0)
                cout << "This is bulukulu festival year." << endl;
        }
        else if(ano%15 == 0)
            cout << "This is huluculu festival year." << endl;
        else
            cout << "This is an ordinary year. " << endl;
        primeiraLinha = false;
    }
    return 0;
}