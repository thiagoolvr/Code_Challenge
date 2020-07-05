#include <iostream>
#include <vector>

using namespace std;

void count_characters(vector<string> v){
    for(int i=0; i<v.size(); i++){
        cout << v[i].length();

        if(i < v.size()-1)
            cout << "-";
        else
            cout << endl;
    }
}

void checkBiggestWord(string &biggestWord, vector<string> v){
    string biggestOfVector = "";
    for(int i=0; i<v.size(); i++){
        if(biggestOfVector.length() <= v[i].length())
            biggestOfVector = v[i];
        
    }
    if(biggestWord.length() <= biggestOfVector.length())
        biggestWord = biggestOfVector;
}

vector<string> extractWords(string phrase){
    vector <string> words;
    string word = "";
    for(int i; i<phrase.length(); i++){
        if(phrase[i] != ' ')
            word += phrase[i];
        else{
            words.push_back(word);
            word = "";
        }
    }
    words.push_back(word);

    return words;
}

int main(){
    string phrase, biggestWord = "";
    vector <string> words, phrases;

    while(getline(cin,phrase) and phrase!="0"){
        phrases.push_back(phrase);
    }

    for(int i=0; i<phrases.size(); i++){
        words = extractWords(phrases[i]);
        count_characters(words);
        checkBiggestWord(biggestWord, words);
    }
    cout << endl << "The biggest word: " << biggestWord << endl;
}