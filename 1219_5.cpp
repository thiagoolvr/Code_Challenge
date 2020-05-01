#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main(){
    int a, b, c;
    double p, two = 2.0;
    double sunflowers, violets, roses;
    double triangle, R, r;
    cout << fixed << setprecision(4);
    while(cin >> a >> b >> c){
        p = (a+b+c)/two;
        triangle = sqrt(p*(p-a)*(p-b)*(p-c));
        r = triangle/p;
        R = a*b*c/(4*triangle);

        roses = M_PI*r*r;
        violets = triangle - roses;
        sunflowers = M_PI*R*R - triangle;

        cout << sunflowers << endl;
        cout << violets << endl;
        cout << roses << endl;
    }
}