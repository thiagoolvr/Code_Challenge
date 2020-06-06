#include <iostream>
#include <string>

using namespace std;

void ordena_strings(string &str1, string &str2, string &str3){
    string vector[] = {str1, str2, str3};
    bool ordenado = false;
    string aux;
    while(!ordenado){
        ordenado = true;
        for(int i=1; i<3; i++){
            if(vector[i].length() > vector[i-1].length()){
                aux = vector[i];
                vector[i] = vector[i-1];
                vector[i-1] = aux;
                ordenado = false;
            }
        }
    }

    str1 = vector[0];
    str2 = vector[1];
    str3 = vector[2];
}

string ordem_alfabetica(string str1){
    bool ordenado = false;
    char aux;
    while(!ordenado){
        ordenado = true;
        for(int i=1; i<str1.length(); i++){
            if(str1[i-1] > str1[i]){
                aux = str1[i];
                str1[i] = str1[i-1];
                str1[i-1] = aux;
                ordenado = false;
            }
        }
    }
    return str1;
}

string compara_strings(string str1, string str2, string str3){
    int pos;
    string check = "";
    for(int i=0; i<str2.length(); i++){
        if( check.find(str2[i]) == -1 ){
            pos = str1.find(str2[i]);
            if( pos != -1 ){
                check += str2[i];
                str1.erase(pos,1);
            }else 
                return "CHEATER";
        }
    }
    for(int i=0; i<str3.length(); i++){
        if( check.find(str3[i]) == -1 ){
            pos = str1.find(str3[i]);
            if( pos != -1 ){
                check += str3[i];
                str1.erase(pos,1);
            }else 
                return "CHEATER";
        }
    }
    return ordem_alfabetica(str1);
}

int main(){
    int N;
    cin >> N;
    cin.ignore();
    string str1, str2, str3;
    for(int i=0; i<N; i++){
        getline(cin,str1);
        getline(cin,str2);
        getline(cin,str3);
        ordena_strings(str1,str2,str3);
        //str1 = ordem_alfabetica(str1);
        cout << compara_strings(str1,str2,str3) << endl;

    }
    return 0;
}