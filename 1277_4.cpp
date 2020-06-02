#include <iostream>

using namespace std;

bool verifica_frequencia(string frequencia){
    double total = 0, faltas = 0;
    for(int i=0; i<frequencia.length(); i++){
        if(frequencia[i] != 'M')
            total++;
        if(frequencia[i] == 'A')
            faltas++;
    }
    return (faltas < total*0.25);
}

int main(){
    int numTestes;
    cin >> numTestes;
    int num;
    for(int i=0; i<numTestes; i++){
        //ENTRADA
        cin >> num;
        string estudantes[num];
        for(int j=0; j<num; j++){
            cin >> estudantes[j];
        }
        //SAÍDA
        bool primeiro = true;
        string freq, output = "";
        for(int j=0; j<num; j++){
            cin >> freq;
            if(!verifica_frequencia(freq)){
                if(primeiro)
                    primeiro = false;
                else 
                    output += " ";
                output += estudantes[j];
            }
        }
        cout << output << endl;
    }
}