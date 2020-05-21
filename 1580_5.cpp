#include <iostream>
#include <map>

using namespace std;

unsigned long long int fat(int n,unsigned long long int repet=1){
    unsigned long long int fat = 1;
    bool div = false;
    while(n>1){
        fat *= n;
        n--;
        if(fat%repet==0 && div==false){
            fat/=repet;
            div = true;
        }
    }
    if(div==false)
        fat/=repet;
    return fat;
}

unsigned long long int numAnagramas(string palavra){
    map <char,int> frequencia;
    for(int i=0; i<palavra.length(); i++){
        frequencia[palavra[i]]++;
    }

    int total = 0;
    unsigned long long int repeticoes = 1;
    for(auto it:frequencia){
        total += it.second;
        repeticoes *= (it.second>1) ? fat(it.second) : 1;
    }
    unsigned long long int anagramas;
    anagramas = fat(total,repeticoes);
    if(anagramas >= 1e9 + 7)
        anagramas %= 1000000007;
    return anagramas;
}
int main(){
    string palavra;
    while(cin >> palavra){
        cout << numAnagramas(palavra) << endl;
    }
    return 0;
}