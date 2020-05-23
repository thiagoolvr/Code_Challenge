#include <iostream>

using namespace std;

bool triplaPitagorica(int x, int y, int z){
    int tripla[3] = {x*x, y*y, z*z};
    int soma = 0;
   /* int maior = tripla[0];
    for(int i=0; i<3; i++){
        soma += tripla[i];
        if(maior < tripla[i])
            maior = tripla[i];
    }
    if(maior == soma - maior)
        return true;
    else    
        return false;*/
    
}

bool mmc(int x, int y, int z){
    int div = 2;
    bool divisorComum;
    /*while(x!=1 && y!=1 && z!=1){
        divisorComum = true;
        for(int *ponteiro=&x; ponteiro<=&z; ponteiro++){
            if(*ponteiro % div == 0)
                *ponteiro /= div;
            else 
                divisorComum = false;
        }
        if(divisorComum)
            return false;
        else
            div++;
    }*/
    int tripla[] = {x, y, z};
    while(tripla[0]!=1 && tripla[1]!=1 && tripla[2]!=1){
        divisorComum = true;
        for(int i=0; i<3; i++){
            if(tripla[i] % div == 0)
                tripla[i] /= div;
            else 
                divisorComum = false;
        }
        if(divisorComum)
            return false;
        else
            div++;
    }
    return true;
}

int main(){
    long int x, y, z;
    while(cin>>x>>y>>z){
        if(triplaPitagorica(x,y,z)){
            if(mmc(x,y,z))
                cout << "tripla pitagorica primitiva" << endl;
            else
                cout << "tripla pitagorica" << endl;
        }else 
            cout << "tripla" << endl;
    }
}