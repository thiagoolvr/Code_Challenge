#include <iostream>

using namespace std;

bool triplaPitagorica(int x, int y, int z){
    int tripla[3] = {x,y,z};
    for(int i=0; i<3; i++){
        int soma = 0;
        for(int j=0; j<3; j++){
            soma += (i!=j) ? tripla[j]*tripla[j] : 0;
        }
        if(tripla[i]*tripla[i] == soma)
            return true;
    }    
    return false;
}

int mmc(int x, int y, int z){
    int div = 2;
    int result = 1;
    bool divisorComum;
    while(x!=1 && y!=1 && z!=1){
        divisorComum = true;
        for(int *ponteiro=&x; ponteiro<=&z; ponteiro++){
            if(*ponteiro % div == 0)
                *ponteiro /= div;
            else 
                divisorComum = false;
        }
        if(divisorComum)
            result *= div;
        else
            div++;
    }
    return result;
}

int main(){
    int x, y, z;
    while(cin>>x>>y>>z){
        if(triplaPitagorica(x,y,z) && mmc(x,y,z)==1)
            cout << "tripla pitagorica primitiva" << endl;
        else if(triplaPitagorica(x,y,z))
            cout << "tripla pitagorica" << endl;
        else 
            cout << "tripla" << endl;
    }
}