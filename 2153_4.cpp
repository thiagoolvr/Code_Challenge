#include <iostream>
#include <vector>

using namespace std;

string check_repeat(string str){
    string original, repeat;
    for(int i=str.length()-1, len=1; i>=0; i--, len++){
        original = str.substr(0,i);
        repeat = str.substr(i,len);
        if(original.find(repeat) == -1){
            return str.substr(0,i+1);
        }
    }
    return str;
}

int main(){
    string palavra;
    while(cin>>palavra){
        cout << check_repeat(palavra) << endl;
    }
}