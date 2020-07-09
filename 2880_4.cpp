#include <iostream>

using namespace std;

bool verifica_crib(string str1, string str2, int pos){
    for(int i=0; i<str2.length(); i++, pos++){
        if(str1[pos] == str2[i])
            return false;
    }
    return true;
}


int main(){
    string mensagem, crib;
    cin >> mensagem >> crib;

    int len = mensagem.length() - crib.length();
    int pos_crib = 0;
    for(int pos=0; pos<=len; pos++){
        if( verifica_crib(mensagem, crib, pos) )
            pos_crib++;
    }
    cout << pos_crib << endl;
}
