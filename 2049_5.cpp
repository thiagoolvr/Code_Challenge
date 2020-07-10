#include <iostream>
#include <string>

using namespace std;

int main(){
    string key, text;
    int count = 1;
    bool first = true;

    while(cin>>key and key!="0"){
        cin >> text;

        if(first)
            first = false;
        else 
            cout << endl;

        cout << "Instancia " << count << endl;
        if(text.find(key) != -1)
            cout << "verdadeira" << endl;
        else 
            cout << "falsa" << endl;

        count++;
    }
}