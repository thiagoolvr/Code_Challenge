#include <iostream>
#include <string>

using namespace std;

int main(){
    string vogais, frase;
    while( cin>>vogais ){
        cin.ignore();
        getline(cin,frase);
        int ocorrencias = 0;
        for(int i=0; i<frase.length(); i++){
            if(vogais.find(frase[i]) != -1)
                ocorrencias++;
        }
        cout << ocorrencias << endl;
    }
}