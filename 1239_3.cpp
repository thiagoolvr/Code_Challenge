#include <iostream>
#include <string>

using namespace std;

int main(){
    string texto;
    bool italico;
    bool negrito;
    while(getline(cin,texto)){
        italico = false;
        negrito = false;
        for(int i=0; i<texto.length(); i++){
            if(texto[i] == '_'){
                texto.erase(i,1);

                if(italico == false)
                    texto.insert(i,"<i>");
                else
                    texto.insert(i,"<\\i>");

                italico = !italico;
            }
            if(texto[i] == '*'){
                texto.erase(i,1);

                if(negrito == false)
                    texto.insert(i,"<b>");
                else
                    texto.insert(i,"<\\b>");
                    
                negrito = !negrito;
            }
        }
        cout << texto << endl;
    }
}