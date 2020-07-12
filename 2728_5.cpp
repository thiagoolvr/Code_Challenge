#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool check(vector <string> v){
    string upper = "COBOL", lower = "cobol";
    for(int i=0; i<5; i++){
        if(v[i].front()==upper[i] or v[i].front()==lower[i])
            continue;
        else if(v[i].back()==upper[i] or v[i].back()==lower[i])
            continue;
        else 
            return false;
    }
    return true;
}

void extract(string str, vector<string> &v){
    string word = "";
    for(int i=0; i<str.length(); i++){
        if(str[i] == '-'){
            v.push_back(word);
            word = "";
        }else 
            word += str[i];
    }
    v.push_back(word);
}

int main(){
    string str;
    while(cin >> str){
        vector <string> words;
        extract(str, words);
        if( check(words) )
            cout << "GRACE HOPPER" << endl;
        else 
            cout << "BUG" << endl;
    }
}