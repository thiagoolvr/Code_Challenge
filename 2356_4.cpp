#include <iostream>
#include <string>

using namespace std;

int main(){
    string D, S;
    int pos;
    while(cin>>D>>S){
        pos = D.find(S);
        if(pos!=-1)
            cout << "Resistente" << endl;
        else
            cout << "Nao resistente" << endl;
    }
}