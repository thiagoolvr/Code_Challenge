#include <iostream>
#include <vector>

using namespace std;

bool check_all(vector <string> v, string str){
    for(int i=0; i<v.size(); i++){
        if( v[i].find(str) == -1)
            return false;
    }
    return true;
}

int main(){
    int n;
    cin >> n;

    vector <string> v;
    string str, menor;

    cin >> str;
    menor = str;
    v.push_back(str);

    for(int i=1; i<n; i++){
        cin >> str;
        v.push_back(str);

        if(str.length() < menor.length())
            menor = str;
    }
    str = menor;

    string substr, maior="";
    for(int pos=0; pos<str.length(); pos++){
        for(int len=1; len<str.length()-pos; len++){
            substr = str.substr(pos,len);
            if( check_all(v, substr) ){
                if( maior.length() < substr.length() )
                    maior = substr;
            }
        }
    }
    cout << maior << endl;

}