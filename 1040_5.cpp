#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    cout << fixed << setprecision(1);

    double n1, n2, n3, n4;
    cin >> n1 >> n2 >> n3 >> n4;

    double media = (n1*2) + (n2*3) + (n3*4) + (n4*1);
    media /= 10;

    cout << "Media: " << media << endl;
    if(media >= 7)
        cout << "Aluno aprovado." << endl;
    else if(media < 5)
        cout << "Aluno reprovado." << endl;
    else{
        cout << "Aluno em exame." << endl;
        double nota_exame;
        cin >> nota_exame;
        cout << "Nota do exame: " << nota_exame << endl;

        media += nota_exame;
        media /= 2;

        if(media >= 5)
            cout << "Aluno aprovado." << endl;
        else 
            cout << "Aluno reprovado." << endl;
        
        cout << "Media final: " << media << endl;
    }
    return 0;
}