#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

bool sortByVal(const pair<string, int> &a, const pair<string, int> &b) { 
    return (a.second > b.second); 
}

bool sortByASCII(const pair<string, int> &a, const pair<string, int> &b) { 
    return (a.first > b.first); 
}

void digraph_5(string text){
    map <string,double> digraph;
    for(int i=0; i<text.length()-1; i++){
        digraph[text.substr(i,2)]++;
    }

    vector <pair<string,double>> vec;
    for(auto it:digraph){
        vec.push_back(make_pair(it.first,it.second));
    }
    sort(vec.begin(), vec.end(), sortByVal);

    /*vector <pair<string,double>>::iterator it, first, last;
    first = vec.begin();
    for(it=vec.begin()+1; it!=vec.end(); it++){
        if(first->second == it->second){
            last = it;
        }else{
            last = it-1;
            sort(first,last,sortByASCII);
            first = it;
        }
    }
    sort(first,last,sortByASCII);*/
     
    double total = text.length();
    for(int i=0; i<5; i++){
        cout << vec[i].first << " " << vec[i].second << " " << vec[i].second/total << endl;
    }
    
}

int main(){
    int n;
    while(cin>>n and n!=0){
        cin.ignore();
        string text = "";
        string aux;
        for(int i=0; i<n; i++){
            getline(cin,aux);
            text += aux;
        }
        digraph_5(text);
        cout<<endl;
    }
}
