#include <iostream>

using namespace std;

bool verificaBissexto(long long int ano){
    return ((ano%4==0 && ano%100!=0) || ano%400==0);
}
bool verificaHuluculu(long long int ano){
    return (ano%15 == 0);
}
int main(){
    long long int ano;
    while(cin >> ano){
        cout << endl;

        bool bissexto = verificaBissexto(ano);
        bool huluculu = verificaHuluculu(ano);

        if(bissexto)
            cout << "This is leap year." <<endl;
        if(huluculu)
            cout << "This is Huluculu festival year." <<endl;
        if(!bissexto && !huluculu)
            cout << "This is an ordinary year. " <<endl;
    }
    return 0;
}