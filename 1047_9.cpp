#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int Hi, Mi, Hf, Mf;
    int h, m;
    cin >> Hi >> Mi >> Hf >> Mf;

    if(Mi <= Mf)
        m = Mf - Mi;
    else{
        m = (60-Mi) + Mf;
        Hi++;
    }

    if(Hi == Hf){
        if(m > 0)
            h = Hf - Hi;
        else
            h = (24-Hi) + Hf;
    }else if(Hi < Hf)
        h = Hf - Hi;
    else
        h = (24-Hi) + Hf;
    
    cout << "O JOGO DUROU "<< h << " HORA(S) E "<< m <<" MINUTO(S)" << endl;
}