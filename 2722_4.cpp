#include <iostream>

using namespace std;

void decodificador(string nome, string sobrenome){

    int i=0, j=0;
    string str = "";
    while(i<nome.length()-1 or j<sobrenome.length()-1){
        str += nome.substr(i,2);
        i += 2;
        str += sobrenome.substr(j,2);
        j += 2;
    }

    cout << str << endl;
}

int main(){
    int N;
    cin>>N;
    cin.ignore();

    string nome, sobrenome;
    for(int i=0; i<N; i++){
        getline(cin, nome);
        getline(cin, sobrenome);
        decodificador(nome, sobrenome);
    }
    return 0;
}