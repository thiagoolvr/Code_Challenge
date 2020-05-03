#include <iostream>
#include <math.h>

using namespace std;

int main(){
    double D, VF, VG;
    double TF, TG;
    while(cin >> D >> VF >> VG){
        TF = 12/VF;
        TG = sqrt(pow(D,2) + pow(12,2))/VG;
        if(TF < TG)
            cout << "N" << endl;
        else 
            cout << "S" << endl;
    }
    return 0;
}