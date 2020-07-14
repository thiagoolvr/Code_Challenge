#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    int N;
    cin >> N;
    cin.ignore();

    string line, Joulupukki = "Joulupukki";
    for(int i=0; i<N; i++){
        getline(cin, line);
        for(int j=0; j<Joulupukki.length(); j++){
            line[i] = Joulupukki[i];
        }
        cout << line << endl;
    }
}