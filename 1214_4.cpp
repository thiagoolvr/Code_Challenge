#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int numTests;
    cin >> numTests;
    int numInputs;
    cout << fixed << setprecision(3);
    for(int i=0; i<numTests; i++){
        cin >> numInputs;
        int inputs[numInputs];
        int sum = 0;
        for(int j=0; j<numInputs; j++){
            cin >> inputs[j];
            sum += inputs[j];
        }
        double average = double(sum)/double(numInputs);
        int aboveAverage = 0;
        for(int k=0; k<numInputs; k++){
            if(inputs[k] > average)
                aboveAverage++;
        }
        double percent = double(aboveAverage)/double(numInputs)*100;
        cout << percent << "%" << endl;
    }
}