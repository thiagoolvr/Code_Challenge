#include <iostream>
#include <math.h>
#include <string>

using namespace std;

string convert(string number,int baseType, int baseToConvert){
    unsigned long long int num=0; 
    int aux;
    if(baseType!=10){
        for(int pos=number.length()-1, exp=0; pos>=0; pos--, exp++){
            if( isalpha(number[pos]) ) {
                switch(number[pos]){
                    case 'a': aux = 10; break;
                    case 'A': aux = 10; break;
                    case 'b': aux = 11; break;
                    case 'B': aux = 11; break;
                    case 'c': aux = 12; break;
                    case 'C': aux = 12; break;
                    case 'd': aux = 13; break;
                    case 'D': aux = 13; break;
                    case 'e': aux = 14; break;
                    case 'E': aux = 14; break;
                    case 'f': aux = 15; break;
                    case 'F': aux = 15; break;
                }
            }else{
                aux = number[pos] - '0';
            }
            num += aux * pow(baseType,exp);
        }
    }else{
        num = stoull(number);
    }
    string digit;
    string numConverted = "";
    while(num>0){
        aux = num % baseToConvert;
        if(aux>9 && baseToConvert==16){
            switch(aux){
                case 10: digit = 'A'; break;
                case 11: digit = 'B'; break;
                case 12: digit = 'C'; break;
                case 13: digit = 'D'; break;
                case 14: digit = 'E'; break;
                case 15: digit = 'F'; break;
            }
        }else{
            digit = to_string(aux);
        }
        numConverted.insert(0,digit);
        num /= baseToConvert;
    }
    return numConverted;
}

int main(){
    int numTests;
    cin >> numTests;
    string num, baseType;
    for(int i=1; i<=numTests; i++){
        cin >> num >> baseType;
        cout << "Case " << i << ":" << endl;
        switch(baseType[0]){
            case 'b':
                cout << convert(num,2,10) << " dec" << endl;
                cout << convert(num,2,16) << " hex" << endl;
                break;
            case 'd':
                cout << convert(num,10,16) << " hex" << endl;
                cout << convert(num,10,2) << " bin" << endl;
                break;
            case 'h':
                cout << convert(num,16,10) << " dec" << endl;
                cout << convert(num,16,2) << " bin" << endl;
                break;
        }
        cout << endl;
    }
}