#include <iostream>

using namespace std;

int main(){
    int n, m ,u;
    cin >> n >> m >> u;
    int matriz[n];
    for(int i=0; i<n; i++){
        cin >> matriz[i];
    }
    int L, R, v, p;
    int k;
    for(int i=0; i<m; i++){
        cin >> L >> R >> v >> p;
        k = 0;
        for(int j=L-1; j<=R-1; j++){
            if(matriz[j]<v)
                k++;
        }
        matriz[p-1] = u*k/(R-L+1);
    }
    for(int i=0; i<n; i++){
        cout << matriz[i] <<endl;
    }
}