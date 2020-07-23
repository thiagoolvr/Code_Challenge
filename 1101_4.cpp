#include <iostream>

using namespace std;

void ordena(int &M, int &N){
    int aux;
    if(M > N){
        aux = M;
        M = N;
        N = aux;
    }
}

int main(){
    int M, N;
    cin >> M >> N;
    while(M>0 and N>0){
        ordena(M,N);
        int sum = 0;
        for(int i=M; i<=N; i++){
            cout << i << " ";
            sum += i;
        }
        cout << "Sum=" << sum << endl;
        cin >> M >> N;
    }
}