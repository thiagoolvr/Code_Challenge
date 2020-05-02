#include <iostream>
#include <string>

using namespace std;


int main(){
    int num;
    string multiple;
    while(cin >> num){
        multiple = "1"
        while(true){
            if(stoll(multiple)%num == 0)
                break;
            else
                multiple += "1";
        }
        cout << multiple.length() << endl;
    }
}