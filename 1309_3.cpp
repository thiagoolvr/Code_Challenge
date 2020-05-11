#include <iostream>
#include <string>

using namespace std;

int main(){
    string dolares, centavos;
    while(cin >> dolares >> centavos){
        if(centavos.length() == 1)
            centavos = '0' + centavos;
        for(int i=dolares.length(), count=0; i>0; i--, count ++){
            if(count == 3){
                dolares.insert(i,1,',');
                count = 0;
            }
        }
        cout << '$' + dolares + '.' + centavos << endl;
    }
}