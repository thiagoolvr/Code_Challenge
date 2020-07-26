#include <iostream>

using namespace std;

string game(string player1, string player2){
    string regras[5][5] = { 
        {"tesoura", "papel", "Spock", "lagarto", "pedra"},
        {"papel", "pedra", "tesoura", "Spock", "lagarto"},
        {"pedra", "lagarto", "papel", "tesoura", "Spock"},
        {"lagarto", "Spock", "pedra", "papel", "tesoura"},
        {"Spock", "tesoura", "lagarto", "pedra", "papel"}
    };
    for(int i=0; i<5; i++){
        if(player1 == regras[i][0]){
            for(int j=0; j<5; j++){
                if(player2 == regras[i][j]){
                    if(j == 0)
                        return "De novo!";
                    else if(j % 2 == 0)
                        return "Raj trapaceou!";
                    else 
                        return "Bazinga!";
                }
            }
        }
    }

    return "Informe uma entrada válida!";
}
int main(){
    int T;
    cin >> T;

    string player1, player2;
    for(int i=0; i<T; i++){
        cin >> player1 >> player2;
        cout << "Caso #" << i+1 << ": "; 
        cout << game(player1, player2) << endl;
    }
}