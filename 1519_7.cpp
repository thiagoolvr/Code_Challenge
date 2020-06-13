#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

void abreviacoes(string frase){
    string new_frase;
    vector <string> palavras;
    map <char,string> abrev;

    int pos = 0;
    int len = 1;
    for(int i=0; i<frase.length(); i++, len++){
        if(frase[i] == ' '){
            palavras.push_back( frase.substr(pos,len-1) );
            pos = i+1;
            len = 0;
        }
        if(i == frase.length()-1){
            palavras.push_back( frase.substr(pos,len) );
        }
    }

    int count = 0;
    for(auto palavra:palavras){
        if(palavra.length() > 2){
            abrev[palavra[0]] = palavra;
            palavra = palavra[0];
            palavra += ".";
            count++;
        }
        new_frase += palavra;
        new_frase += " ";
    }
    new_frase.pop_back();

    cout << new_frase << endl;
    cout << count << endl;
    for(auto it:abrev){
        cout << it.first << ". = " << it.second << endl;
    }

}

int main(){
    string frase;
    getline(cin,frase);

    while(frase!="."){
        abreviacoes(frase);
        getline(cin,frase);
    }
}