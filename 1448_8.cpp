#include <iostream>
#include <string>

using namespace std;

string compara_strings(string original, string time1, string time2){
    int pontos_time1 = 0;
    int pontos_time2 = 0;
    for(int i=0; i<original.length(); i++){
        if(original[i] == time1[i])
            pontos_time1++;
        if(original[i] == time2[i])
            pontos_time2++;
    }
    if(pontos_time1 > pontos_time2)
        return "time 1";
    else if(pontos_time2 > pontos_time1)
        return "time 2";
    else 
        return "empate";
}

int main(){
    int instancias;
    cin >> instancias;
    cin.ignore();

    string original, time1, time2;
    for(int i=1; i<=instancias; i++){
        getline(cin,original);
        getline(cin,time1);
        getline(cin,time2);
        
        cout << "Instancia " << i << endl;
        cout << compara_strings(original,time1,time2) << endl;

        if(i != instancias) cout << endl;
    }
    return 0;
}