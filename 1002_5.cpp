#include <iostream>
#define PI 3.14159

using namespace std;

int main(){
    double r;
    cin >> r;
    cout << fixed;
    cout.precision(4);
    cout << "A=" << PI * r * r << endl;
}