#include <iostream>
#include <map>

using namespace std;

bool verificaElementoMap(map <char,char> m, char c){
    map<char,char>::iterator it;
    for(it = m.begin(); it!=m.end(); it++){
        if(it->first==c or it->second==c)
            return true;
    }
    return false;
}

int main(){
    int N,M;
    cin >> N >> M;
    char E, S;
    map <char,char> decodificador;
    for(int i=0; i<N; i++){
        cin >> E >> S;
        decodificador[E] = S;
        decodificador[S] = E;
    }
    cin.ignore();

    char letra;
    string frase;
    for(int i=0; i<M; i++){
        getline(cin,frase);
        for(int j=0; j<frase.length(); j++){
            letra = frase[j];
            if( verificaElementoMap(decodificador, letra) ){
                frase[j] = decodificador[letra];
            }
        }
        cout << frase << endl;
    }

    return 0;
}