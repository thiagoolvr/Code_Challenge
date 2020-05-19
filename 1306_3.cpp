#include <iostream>
#include <math.h>

using namespace std;

int main(){
    double R, N;
    cin >> R >> N;
    double num;
    int count = 1;
    while(R!=0 && N!=0){
        cout << "Case " << count << ": ";
        if(N+N*26 >= R){
            num = (R - N) / N;
            if(num<0)
                num = 0;
            cout << ceil(num) << endl; 
        }else{
            cout << "impossible" << endl;
        }
        count++;
        cin >> R >> N;
    }
}