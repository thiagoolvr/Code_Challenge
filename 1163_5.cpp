#include <iostream>
#include <math.h>
#include <iomanip>
#define G 9.80665
#define PI 3.14159

using namespace std;

double baskara(double a, double b, double c){
    double delta = pow(b,2) - 4*a*c;
    if(delta==0){
        return (-b) / (2*a);
    }else if(delta>0){
        double raiz1, raiz2;
        raiz1 = (-b - sqrt(delta)) / (2*a);
        raiz2 = (-b + sqrt(delta)) / (2*a);
        if(raiz1>0)
            return raiz1;
        else
            return raiz2;
    }else
        return NULL;
}

int main(){
    int p1, p2, n;
    double h, ang, v;
    double rad, vx, vy, t, d;
    cout << fixed << setprecision(5);
    while(cin >> h >> p1 >> p2 >> n){
        for(int i=0; i<n; i++){
            cin >> ang >> v;
            rad = ang/180*PI;

            vy = v * sin(rad);
            t = baskara(-0.5*G, vy, h);

            vx = v * cos(rad);
            d = vx * t;

            cout << d << " -> ";
            if(p1<=d && d<=p2)
                cout << "DUCK" << endl;
            else 
                cout << "NUCK" << endl;
        }
    }
}