#include <iostream>

using namespace std;

int main(){
    unsigned long long int num_wariors;
    int line_size, count_lines, numTest;
    cin >> numTest;
    for(int i=0; i<numTest; i++){
        cin >> num_wariors;
        line_size = 1;
        count_lines = 0;
        while(num_wariors>=line_size){
            num_wariors -= line_size;
            count_lines++;
            line_size++;
        }
        cout << count_lines << endl;
    }
}
//S = (n*(n+1))/2