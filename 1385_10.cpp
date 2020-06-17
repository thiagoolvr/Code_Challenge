#include <iostream>
#include <string>
#include <ctype.h>
#include <vector>
#include <cstdlib>

using namespace std;

void extrai_dados(string str){
    string name = "";
    string numbers = "";
    for(int i=0; i<str.length(); i++){
        if( isalpha(str[i]) )
            name += str[i];
        else
            numbers += str[i];
    }

}

bool check(vector <int> numbers){
    int sum = 0;
    int i;
    for(i=0; i<numbers.size()-1; i++){
        sum += numbers[i];
    }

    return sum == numbers[i+1];
}

void random(string str, int N, int &numbers[]){
    int len = str.length() - N;
    int pos;
    while(len != 0){
        pos = rand() % N;
        numbers[pos] += 1;
        len--;
    }
    return numbers;
} 

void calc(string str, int N){
    vector <int> numbers;
    int rand[N];
    
    do{
        for(int i=0; i<N; i++){
            rand[i] = 1;
        }
        random(str,N,rand);
        for(int i=0, pos=0; i<N; i++){
            string num = "";
            for(int j=0; j<rand[i]; j++){
                num += str[pos];
                pos++;
            }
            numbers.push_back( stoi(num) );
        }
    }while( !check(numbers) );

    for(int i=0; i<N; i++){

    }
}

int num_produtos(string str){
    int N;
    for(int i=0; i<str.length(); i++){
        N += (str[i]=='P') ? 1 : 0;
    }
    return N+1;
}

int main(){
    /*int C, N;
    string str;
    cin >> C;
    for(int i=0; i<C; i++){
        cin >> str;
        N = num_produtos(str);
        for(int j=0; j<4; j++){
            cin >> str;

        }
    }*/
    for(int i=0; i<10; i++){
        random("121100131",4);
        //cout << rand() % 7 << endl;
    }
    return 0;
}