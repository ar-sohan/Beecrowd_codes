#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     double a, b, c, d;
     cin >> a >> b;
     cin >> c >> d;
     double average = (a*2 + b*3 + c*4 + d*1) / 10;
     double score;
     cout << "Media: " << fixed << setprecision(1) << average << endl;
     if(average >= 7.0){
         cout << "Aluno aprovado." << endl;
     }
     else if(average < 5.0){
         cout << "Aluno reprovado." << endl;
     }
     else if(average >= 5.0 && average <= 6.9){
         cout << "Aluno em exame." << endl;
         cin >> score;
         cout << "Nota do exame: "<< fixed << setprecision(1) << score << endl;
         double total = (score + average) / 2;
         if (total >= 5.0){
             cout << "Aluno aprovado." << endl;
         }
         else {
             cout << "Aluna reprovado." << endl;
         }
         cout << "Media final: " << fixed << setprecision(1) << total << endl;
     }
    return 0;
}
