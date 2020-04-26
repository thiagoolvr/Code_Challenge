#include <iostream>
#include <string>

using namespace std;

void encaixa(string num1, string num2){
    int n1 = num1.size();
    int n2 = num2.size();

    bool encaixa = true;
    for(int i=0; i<n2; i++){
        if(num1[n1-n2+i] != num2[i])
            encaixa = false;
    }
    if(encaixa)
        cout << "encaixa" << endl;
    else
        cout << "nao encaixa" << endl;
}
int main(){
    int numTestes;
    cin >> numTestes;
    string num1,num2;
    for(int i=0; i<numTestes; i++){
        cin >> num1 >> num2;
        encaixa(num1,num2);
    }
}