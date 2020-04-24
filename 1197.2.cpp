#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int v, t;
    while(cin >> v >> t){
        t *= 2;
        cout << v*t << endl;
    }
    return 0;
}