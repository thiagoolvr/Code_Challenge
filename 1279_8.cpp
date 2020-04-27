#include <iostream>
#include <vector>

using namespace std;

bool verificaBissexto(long long int ano){
    return ((ano%4==0 && ano%100!=0) || ano%400==0);
}
bool verificaHuluculu(long long int ano){
    return (ano%15 == 0);
}
int main(){
    long long int ano;
    vector int resultados; 
    while(cin >> ano){
        cout << endl;
        if(verificaBissexto(ano)){
            cout << "This is leap year." <<endl;
            if(verificaHuluculu(ano))
                cout << "This is Huluculu festival year." <<endl;
            if(ano%55 == 0)
                cout << "This is Bulukulu festival year." <<endl;
        }
        else if(verificaHuluculu(ano))
            cout << "This is Huluculu festival year." <<endl;
        else
            cout << "This is an ordinary year." <<endl;
    }
    return 0;
}