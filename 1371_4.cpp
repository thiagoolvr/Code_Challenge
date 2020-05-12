#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    while(n!=0){
        bool primeiro = true;
        for(int i=1 ; i<=sqrt(n); i++){
            if(primeiro){
                cout << i*i;
                primeiro = false;
            }else 
                cout << " " << i*i;
        }
        cout << endl;
        cin >> n;
    }
}