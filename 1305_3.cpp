#include <iostream>
#include <string> 
#include <math.h> 

using namespace std;

void check_input(string &num){
    if(num.find(".") == -1)
        num += ".0";

    if(num.back() == '.')
        num += "0";
}

int main(){
    string num, cutoff;
    while(cin>>num>>cutoff){
        check_input(num);

        string after_point = "";
        for(int i=num.find("."); i<num.length(); i++){
            after_point += num[i];
        }

        double number = stod(num);

        if(stod(after_point) > stod(cutoff))
            number = ceil(number);
        else 
            number = floor(number);

        cout << number << endl;
    }
}