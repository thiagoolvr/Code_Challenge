#include <iostream>
#include <string>
#include <vector>

using namespace std;

void ordena_vetor(vector <string> &palavras){
    string aux;
    bool ordenado = false;
    while(!ordenado){
        ordenado = true;
        for(int i=1; i<palavras.size(); i++){
            if(palavras[i-1].length() > palavras[i].length()){
                aux = palavras[i];
                palavras[i] = palavras[i-1];
                palavras[i-1] = aux;
                ordenado = false;
            }
        }
    }
}

int maior_sequencia(vector<string> palavras){
    vector<vector<string>> sequencias;
    int maior_seq = 0;
    for(int i=0; i<palavras.size(); i++){
        sequencias.push_back({});
        sequencias[i].push_back(palavras[i]);
        for(int j=i+1; j<palavras.size(); j++){
            if( palavras[j].find(sequencias[i].back()) )
                sequencias[i].push_back(palavras[j]);
        }
        if(sequencias[i].size() > maior_seq) 
            maior_seq = sequencias[i].size();
        
    }
    return maior_seq;
}

int main(){
    /*int N;
    string palavra;
    while(cin>>N and N!=0){
        vector <string> palavras;
        for(int i=0; i<N; i++){
            cin >> palavra;
            palavras.push_back(palavra);
        }
        ordena_vetor(palavras);

    }*/
    vector <string> v = {"plant", "ant", "cant", "decant", "deca", "an"};
    ordena_vetor(v);
    cout << maior_sequencia(v) << endl;
}