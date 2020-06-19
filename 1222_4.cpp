#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main(){
    double N, L, C;
    string text;
    while(cin>>N>>L>>C){
        cin.ignore();
        getline(cin,text);
        double caracteres = text.length();
        cout << ceil(caracteres/C/L) << endl;
    }
}