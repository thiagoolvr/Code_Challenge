#include <iostream>
#include <string>
#include <ctype.h>

using namespace std;

string converte(string txt, bool mod){
    for(int i=0; i<txt.length(); i++){
        txt[i] = (mod == false) ? tolower(txt[i]) : toupper(txt[i]);
    }
    return txt;
}

int main(){
    string tag, num, text;
    int pos;
    while(cin>>tag>>num){
        cin.ignore();
        getline(cin,text);
        while(text.find(tag) != -1){
            pos = text.find(tag);
            text.erase(pos,tag.length());
            text.insert(pos,num);
        }
        cout << text << endl;
    }
}
