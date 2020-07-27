#include <iostream>

using namespace std;

int main(){
    int t1, t2, t3;
    while(cin >> t1 >> t2 >> t3){
        int d1, d2;
        d1 = t2 - t1;
        d2 = t3 - t2;

        if(d1>0 and d2>0 and d1>d2)
            cout << ":(" << endl;
        else if(d1<0 and d2<0 and d1<d2)
            cout << ":)" << endl;
        else if(d2 > 0)
            cout << ":)" << endl;
        else 
            cout << ":(" << endl;
    }
}