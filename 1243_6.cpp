#include <iostream>
#include <string>
#include <ctype.h>
#include <vector>

using namespace std;

int media_palavras(string frase){
    int total = 0, palavras = 0;
    int numPalavras = 0;
    bool ePalavra = true;
    for(int i=0; i<frase.length(); i++){
        if( isalpha(frase[i]) )
            palavras++;
        else if(frase[i]!=' ')
            ePalavra = false;
        
        if(frase[i] == ' ' or i==frase.length()-1){
            total += (ePalavra) ? palavras : 0;
            palavras = 0;
            numPalavras++;
            ePalavra = true;
        }  
    }
    return total / numPalavras;
}

int main(){
    string frase;
    while( getline(cin,frase) ){
        double media = media_palavras(frase);
        if(media <= 3)
            cout << 250 << endl;
        else if(media <= 5)
            cout << 500 << endl;
        else
            cout << 1000 << endl;
    }
}