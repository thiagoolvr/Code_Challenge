#include <iostream>

using namespace std;

int main(){
    int a, b;
    cin >> a >> b;

    int q, r;
    q = a/b;
    r = a - b * q;

    cout << q << " " << r << endl;
    
}