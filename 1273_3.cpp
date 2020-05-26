#include <iostream>

using namespace std;

int main(){
    int N;
    cin >> N;
    bool first = true;
    while(N>0){
        if(first)
            first = false;
        else 
            cout << endl;
        
        string palavras[N];
        string maior_palavra = "";
        for(int i=0; i<N; i++){
            cin >> palavras[i];
            if(palavras[i].length() > maior_palavra.length())
                maior_palavra = palavras[i];
        }
        int len;
        for(int i=0; i<N; i++){
            len = maior_palavra.length() - palavras[i].length();
            for(int j=0; j<len; j++){
                cout << " ";
            }
            cout << palavras[i] << endl;
        }
        cin >> N;
    }
}