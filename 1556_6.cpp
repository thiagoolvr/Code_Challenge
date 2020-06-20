#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compara_string(string str1, string str2){
    string menor;
    if( str1.length() < str2.length() )
        menor = str1;
    else 
        menor = str2;

    string aux;
    for(int i=0; i<menor.length(); i++){
        if( str1[i] > str2[i] ){
            return true;
        }else if( str1[i] < str2[i])
            return false;
        
        if(i == menor.length()-1){
            if(menor == str1)
                return false;
            else 
                return true;
        }
            
    }
    return false;
}

void ordena_vetor(vector<string> v){
    bool desordenado = true;
    string aux;
    while(desordenado){
        desordenado = false;
        for(int i=1; i<v.size(); i++){
            if( compara_string(v[i-1], v[i]) ){
                aux = v[i-1];
                v[i-1] = v[i];
                v[i] = aux;
                desordenado = true;
            }
        }
    }
    for(int i=0; i<v.size(); i++){
        cout << v[i] << endl;
    }
}

void todas_substr(string str){
    vector<string> v;
    string *it;
    string substr;

    int length = str.length();
    for(int i=0; i<length; i++){
        v.push_back( str.substr(i,1) );
    }

    for(int n=1; n<length; n++){
        for(int i=0; i<length; i++){
            for(int j=i+1; j+n<=length; j++){
                substr = str[i] + str.substr(j,n);

                v.push_back(substr);
            }
        }
    }
    ordena_vetor(v);
}

int main(){
    string str;
    /*while(cin >> str){
        
    }*/
    vector<string> v = {"a","b","c"};
    vector<int>::iterator it;
    it = find(v.begin(), v.end(), "b");
    if(it != v.end())
        cout << "OK";
    else 
        cout << "error";
}