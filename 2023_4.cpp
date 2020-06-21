#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool compara_nomes(string nome1, string nome2){
    int menor;
    if(nome1.length() < nome2.length())
        menor = nome1.length();
    else 
        menor = nome2.length();

    char letra1, letra2;
    for(int i=0; i<menor; i++){
        letra1 = tolower(nome1[i]);
        letra2 = tolower(nome2[i]);

        if(letra1 < letra2)
            return false;
        else if(letra1 > letra2)
            return true;
        else 
            continue;
    }

    return false;
}

void ordem_alfabetica(vector <string> &nomes){
    string aux;
    bool desordenado = true;
    while(desordenado){
        desordenado = false;
        for(int i=1; i<nomes.size(); i++){
            if( compara_nomes(nomes[i-1], nomes[i]) ){
                aux = nomes[i];
                nomes[i] = nomes[i-1];
                nomes[i-1] = aux;
                desordenado = true;
            }
        }
    }
}

int main(){
    vector <string> nomes;
    string nome;
    while( getline(cin,nome) ){
        nomes.push_back(nome);
    }
    ordem_alfabetica(nomes);
    cout << nomes.back() << endl;
}