#include <iostream>
#include <string>

using namespace std;

int main(){
    char N;
    string D;
    while(cin>>N>>D && (N!='0' || D!="0")){
        for(int i=0; i<D.length(); i++){
            if(D[i] == N){
                D.erase(i,1);
                i--;
            }
        }
        for(int i=0; i<D.length(); i++){
            if(D[i] == '0'){
                D.erase(i,1);
                i--;
            }else
                break;
        }
        if(D == "")
            cout << 0 << endl;
        else 
            cout << D << endl;
    }
}