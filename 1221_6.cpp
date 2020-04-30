#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int numTests;
    cin >> numTests;
    long int num;
    bool prime;
    for(int i=0; i<numTests; i++){
        cin >> num;
        prime = true;
        if(num == 1){
            cout << "Not Prime" << endl;
            continue;
        }
        for(int j=2; j<=sqrt(num); j++){
            if(num%j == 0){
                prime = false;
                break;
            }
        }
        if(prime)
            cout << "Prime" << endl;
        else 
            cout << "Not Prime" << endl;
    }
}