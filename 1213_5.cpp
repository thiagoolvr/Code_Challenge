#include <iostream>
#include <string>

using namespace std;


int main(){
    int num, i;
    string multiple;
    while(cin >> num){
        multiple = "1";
        while(stoull(multiple)%num != 0){
            multiple += "1";
        }
        cout <<  multiple.length() << endl;
    }
}