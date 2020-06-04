#include <iostream>
#include <string>

using namespace std;

int main(){
    int N;
    cin >> N;
    cin.ignore();
    string text;
    string secretMessage;
    for(int i=0; i<N; i++){
        getline(cin,text);
        secretMessage = "";
        if(text[0] != ' ') 
            secretMessage += text[0];
        for(int j=1; j<text.length(); j++){
            if(text[j] != ' ' && text[j-1] == ' ')
                secretMessage += text[j];
        }
        cout << secretMessage << endl;
    }
}