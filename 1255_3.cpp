#include <iostream>
#include <ctype.h>
#include <string>
#include <map>

using namespace std;

void ordena(string &str){
    char aux;
    bool ordenado = false;
    while(!ordenado){
        ordenado = true;
        for(int i=1; i<str.length(); i++){
            if(str[i-1] > str[i]){
                aux = str[i-1];
                str[i-1] = str[i];
                str[i] = aux;
                ordenado = false;
            }
        }
    }
}

int main(){
    int N;
    cin >> N;
    cin.ignore();
    char letra;     
    string frase;
    for(int i=0; i<N; i++){
        map <char,int> freq;
        getline(cin, frase);
        for(int j=0; j<frase.length(); j++){
            letra = tolower(frase[j]);
            if( isalpha(letra) )
                freq[letra]++;
        }
        int maiorFrequencia = 0;
        string frequente = "";
        for(auto k=freq.begin(); k!=freq.end(); k++){
            if(k->second > maiorFrequencia){
                maiorFrequencia = k->second;
                frequente = k->first;
            }else if(k->second == maiorFrequencia)
                frequente += k->first;
        }
        ordena(frequente);
        cout << frequente << endl;
    }
}