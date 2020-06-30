#include <iostream>
#include <string>
#include <vector>

using namespace std;

int check_emoticons(string str, vector<string> emoticons){
    int changes = 0;
    for(int i=0; i<emoticons.size(); i++){
        int pos, len;
        while(str.find(emoticons[i]) != -1){
            pos = str.find(emoticons[i]);
            len = emoticons[i].length();
            str.erase(pos, len);
            changes++;
        }
    }
    return changes;
}

int main(){
    int N, M;
    cin >> N >> M;
    while(N!=0 or M!=0){
        cin.ignore();
        vector <string> emoticons;
        string str;

        for(int i=0; i<N; i++){
            getline(cin, str);
            emoticons.push_back(str);
        }

        int changes = 0;
        for(int i=0; i<M; i++){
            getline(cin, str);
            changes += check_emoticons(str, emoticons); 
        }

        cout << changes << endl;
        cin >> N >> M;
    }
}