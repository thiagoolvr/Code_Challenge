#include <iostream>
#include <string>

using namespace std;

void imprime(string v[], int N, int M, int A, int B){
    string str;
    for(int i=0; i<N; i++){
        str = "";
        for(int j=0; j<M; j++){
            for(int k=0; k<B/M; k++){
                str += v[i][j];
            }
        }

        for(int j=0; j<A/N; j++){
            cout << str << endl;
        }
    }
}

int main(){
    int N,M;
    int A,B;
    bool primeiro = true;
    while(cin>>N>>M and (N!=0 or M!=0)){
        cin.ignore();
        string imagem[N];
        for(int i=0; i<N; i++){
            getline(cin,imagem[i]);
        }
        cin >> A >> B;
        imprime(imagem, N, M, A, B);
        cout << endl;
    }
}