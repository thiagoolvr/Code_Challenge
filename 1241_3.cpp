#include <iostream>

using namespace std;

bool encaixa(string A, string B){
    int len1 = A.length();
    int len2 = B.length();
    if(len1 < len2)
        return false;
    for(int j=len1-1, k=len2-1; j>=len1-len2; j--, k--){
        if(A[j] != B[k])
            return false;
    }
    return true;
}

int main(){
    int N;
    cin >> N;
    string A, B;
    for(int i=0; i<N; i++){
        cin >> A >> B;
        if( encaixa(A,B) )
            cout << "encaixa" << endl;
        else
            cout << "nao encaixa" << endl;
    }
}