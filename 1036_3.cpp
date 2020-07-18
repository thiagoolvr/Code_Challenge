#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

void baskara(double a, double b, double c){
    double delta = b*b - 4 * a * c;

    if(a==0 || delta<0){
        cout << "Impossivel calcular" << endl;
        return;
    }

    cout << fixed << setprecision(5);
    cout << "R1 = " << (-b + sqrt(delta) ) / (2 * a) << endl;
    cout << "R2 = " << (-b - sqrt(delta) ) / (2 * a) << endl;;
    return;
}

int main(){
    double a, b, c;
    cin >> a >> b >> c;

    baskara(a,b,c);
}