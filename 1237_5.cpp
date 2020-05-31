#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    string str1, str2;
    while(getline(cin,str1)){
        getline(cin,str2);
        if(str1.length() < str2.length()){
            string aux;
            aux = str1;
            str1 = str2;
            str2 = aux;
            aux = "";
        }
        string comum = "";
        vector <string> substr;
        for(int i=0; i<str1.length(); i++){
            comum += str1[i];
            if(str2.find(comum) == -1){
                comum.pop_back();
                substr.push_back(comum);
                comum = "";
            }
        }
        int maior = 0;
        for(int i=0; i<substr.size(); i++){
            if(maior < substr[i].length())
                maior = substr[i].length();
        }
        cout << maior << endl;
    }
}