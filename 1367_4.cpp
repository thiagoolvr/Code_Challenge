#include <iostream>
#include <string>
#include <vector>

using namespace std;

void extracts_data(string str, char &letter, int &time, string &result){
    vector <string> inputs;
    int pos = 0, len = 0;
    for(int i=0; i<str.length(); i++, len++){
        if(str[i] == ' '){
            inputs.push_back(str.substr(pos,len));
            pos = i+1;
            len = 0;
            i++;
        }
        if(i == str.length()-1)
            inputs.push_back(str.substr(pos,len+1));
    }
    letter = inputs[0][0];
    time = stoi(inputs[1]);
    result = inputs[2];
}

int main(){
    string str;
    string result;
    char letter;
    char problem = 'A';
    int time;
    int time_incorrect;

    int N;
    while(cin>>N and N!=0){
        cin.ignore();
        int S = 0, P = 0;
        time_incorrect = 0;

        for(int i=0; i<N; i++){
            getline(cin,str);
            extracts_data(str,letter,time,result);

            if(letter != problem){
                time_incorrect = 0;
                problem = letter;
            }
            if(result == "correct"){
                P += time_incorrect + time;
                time_incorrect = 0;
                S++;
            }else
                time_incorrect += 20;
        }

        cout << S << " " << P << endl;
    }
}