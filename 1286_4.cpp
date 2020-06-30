#include <iostream>
#include <vector>

using namespace std;

int main(){
    int N, P;
    while(cin>>N and N!=0){
        cin >> P;
        vector<int> tempo(N), pizzas(N), tempoPorPizza(N);
        for(int i=0; i<N; i++){
            cin >> tempo[i];
            cin >> pizzas[i];
            tempoPorPizza[i] = tempo[i]/pizzas[i];
        }

        int total_pizzas = 0, tempo_total1 = 0;
        int index = 0;
        while(true){
            for(int i=1; i<N; i++){
                if(tempoPorPizza[i] > tempoPorPizza[index]){
                    index = i;
                }
            }
            if(total_pizzas + pizzas[index] <= P){
                total_pizzas += pizzas[index];
                tempo_total += tempo[index];
                tempoPorPizza[index] = 0;
            }else 
                break;
        }
        

        cout << tempo_total << " min." << endl;
    }
}