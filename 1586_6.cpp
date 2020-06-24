#include <iostream>
#include <vector>

using namespace std;

int caboDeGuerra(int pontos[], int N){
    int pos = N/2;
    int controler = 0; 
    while(pos>0 or pos<N){
        int pontos_A=0, pontos_B=0;
        for(int i=pos, j=1; i>=0; i--, j++){
            pontos_A += pontos[i] * j;
        }
        for(int i=pos+1, j=1; i<N; i++, j++){
            pontos_B += pontos[i] * j;

        }
        if(pontos_A == pontos_B) return pos;
        
        if(controler == 0){
            if(pontos_A > pontos_B)
                controler = -1;
            else 
                controler = 1;
        }else{
            if(pontos_A > pontos_B and controler==1)
                return -1;
            if(pontos_A < pontos_B and controler==-1)
                return -1;
        }
        pos += controler;  
    }
    return -1;
}

int main(){
    int N;
    string nome;
    while(cin>>N and N!=0){
        string alunos[N];
        int pontos[N] = {0};
        for(int i=0; i<N; i++){
            cin >> nome;
            alunos[i] = nome;
            for(int j=0; j<nome.length(); j++){
                pontos[i] += nome[j];
            }
        }
        int result = caboDeGuerra(pontos, N);
        if(result != -1)
            cout << alunos[result] << endl;
        else
            cout << "Impossibilidade de empate." << endl;
    }
    //int pontos[] = {272, 504, 292, 622, 729, 611, 603, 384, 814};
}