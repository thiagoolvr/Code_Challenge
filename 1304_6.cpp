#include <iostream>
#include <string>

using namespace std;

int main(){
    string str_line;
    string str_num = "";
    int h, v, s, m;
    int vector = [h,v,s,m];
    int *pointer;
    while( getline(cin,str_line) ){
        pointer = &h;
        for(int i=0; i<str_line.length(); i++){
            if(str_line[i] == ':' || str_line[i] == ' '){
                *pointer = stoi(str_num); 
                str_num = "";
                pointer++;
            }else
                str_num += str_line[i];
        }
        cout << h << m << s << v << endl;
    }
    pointer = vector[0];
    for(int i=0;i<4;i++){
        cout << *pointer << "\t";
        pointer++;
    }
    cout << endl << h << "\t" << m << "\t" << s << "\t" << v;
}