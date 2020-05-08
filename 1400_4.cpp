#include <iostream>
#include <string>

using namespace std;

bool check_seven(int n){
    string str = to_string(n);
    if(n%7 == 0)
        return true;
    else if(str.find('7') != -1)
        return true;
    else 
        return false;
}
int count_game(int n, int m, int k){
    int num = m;
    int cont = 0;
    int acrescimo;
    int loop = 0;
    bool crescente = true;
    while(true){
        if( check_seven(num) )
            cont++;
        if(cont == k)
            return num;
        if(loop>100 && cont==0)
            return -1;

        if(m == n || m == 1)
            acrescimo = 2*n - 2;
        else if(crescente)
            acrescimo = 2*(n-m);
        else 
            acrescimo = 2*m - 2;

        num += acrescimo;
        crescente = !crescente;
        loop++;
    }
}

int main(){
    int n, m, k;
    cin >> n >> m >> k;
    int count, num, loop;
    //2*(n-m)
    while(n!=0 && m!=0 && k!=0){
        cout << count_game(n,m,k) << endl;
        cin >> n >> m >> k;
    }
}