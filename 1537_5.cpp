#include <iostream>
#include <fstream>

using namespace std;

unsigned long long int arranjo(int n){
    unsigned long long int arr = 1;
    while(n > 3){
        arr *= n;
        n--;
    }
    if(arr > 1000000009)
        return arr % 1000000009;
    else
        return arr;
}

int main(){
    int n;
    cin >> n;
    //ofstream fout;
    //fout.open("saida.txt");
    while(n!=0){
        //fout << arranjo(n,n-3) << endl;
        cout << arranjo(n) << endl;
        cin >> n;
    }
    //fout.close();
}