#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    int n;
    cin >> n;
    cout << fixed << setprecision(2);
    float sum, average, money_transf;
    while(n!=0){
        float payments[n];
        sum = 0;
        for(int i=0; i<n; i++){
            cin >> payments[i];
            sum += payments[i];
        }

        average = sum/n;
        int average_int = average*1000;
        if(average_int%10 < 5)
            average = (average_int - average_int%10) / 1000;
        else
            average = roundf(average * 100) / 100; 

        money_transf = 0;
        for(int i=0; i<n; i++){
            if(payments[i] > average)
                money_transf += payments[i] - average;
        }
        cout << "$" << money_transf << endl;
        cin >> n;
    }
}