#include <iostream>
#include <string>
#include <vector>

using namespace std;

string remove_spaces(string palavra){
    for(int i=0; i<palavra.length(); i++){
        if(palavra[i] != ' '){
            palavra.erase(0,i);
            break;
        }
    }
    for(int j=palavra.length()-1; j>=0; j--){
        if(palavra[j] != ' '){
            palavra.erase(j+1,palavra.length()-j);
            break;
        }
    }
    vector <int> index4delete;
    int aux = 0;
    for(int k=1; k<palavra.length(); k++){
        if(palavra[k] == ' ' && palavra[k-1] == ' '){
            index4delete.push_back(k - aux);
            aux++;
        }    
    }
    for(int x=0; x<index4delete.size(); x++){
        palavra.erase(index4delete[x],1);
    }
    return palavra;
}

int main(){
    int N;
    cin >> N;
    while(N!=0){
        string palavras[N];
        int bigger_length = 0;
        cin.ignore();
        for(int i=0; i<N; i++){
            getline(cin, palavras[i]);
            palavras[i] = remove_spaces(palavras[i]);
            if(palavras[i].length() > bigger_length)
                bigger_length = palavras[i].length();
        }
        
        bool first = true;
        for(int i=0; i<N; i++){
            if(first){
                first = false;
            }else 
                cout << endl;
            for(int j=0; j<bigger_length-palavras[i].length(); j++){
                cout << " ";
            }
            cout << palavras[i] << endl;
        }
        cin >> N;
    }
}