#include <iostream>
#include <string>
#include <ctype.h>

using namespace std;

int main(){
    string text;
    while(getline(cin,text)){
        for(int i=0, j=0; i<text.length(); i++){
            if(text[i] != ' '){
                if(j%2 == 0)
                    text[i] = toupper(text[i]);
                else 
                    text[i] = tolower(text[i]);

                j++;
            }
        }
        cout << text << endl;
    }
}