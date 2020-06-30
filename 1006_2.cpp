#include <iostream>

using namespace std;

int main(){
    int id, workedHours;
    double valuePerHour;
    cin >> id >> workedHours >> valuePerHour;
    cout << "NUMBER = " << id << endl;
    cout << fixed;
    cout.precision(2);
    cout << "SALARY = U$ " << workedHours*valuePerHour << endl;
}