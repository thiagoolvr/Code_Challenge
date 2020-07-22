#include <iostream>

using namespace std;

int main(){
    int T;
    cin >> T;

    int PA, PB;
    double G1, G2;
    for(int i=0; i<T; i++){
        cin >> PA >> PB >> G1 >> G2;
        int time = 0;
        while(PA <= PB and time <= 100){
            PA += PA * G1 / 100;
            PB += PB * G2 / 100;
            time++;
        }
        if(time <= 100)
            cout << time << " anos." << endl;
        else 
            cout << "Mais de 1 seculo." << endl;
    }
}