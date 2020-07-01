#include <iostream> 
#include <string>
#include <vector>

using namespace std;

int main(){
    vector <string> texto;
    string frase = "";
    string palavra;
    while(cin>>palavra){
        if(frase.length()+palavra.length()>80){
            texto.push_back(frase);
            frase = "";
        }
            frase += palavra + " ";
    }
    texto.push_back(frase);
    int pos, len=0;
    for(int i=0; i<texto.size(); i++){
        while(texto[i].find("<br>") != -1){
            pos = texto[i].find("<br>");
            texto[i].erase(pos,5);
            texto[i].insert(pos,"\n");
        }
        while(texto[i].find("<hr>") != -1){
            pos = texto[i].find("<hr>");
            texto[i].erase(pos,5);
            for(int j=0; j<80; j++){
                texto[i].insert(pos,"-");
            }
            if(pos != 0) texto[i].insert(pos,"\n");
        }
        
        cout << texto[i] << endl;
    }
}