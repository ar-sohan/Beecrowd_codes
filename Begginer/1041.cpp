#include <iostream>
using namespace std;

int main() {

    /**
     * Escreva a sua solu��o aqui
     * Code your solution here
     * Escriba su soluci�n aqu�
     */
     double a, b;
     cin >> a >> b;
     if (a+b==0){
         cout << "Origem" << endl;
     }
     else if (a == 0){
         cout << "Eixo Y" << endl;
     }
     else if (b == 0){
         cout << "Eixo X" << endl;
     }
     else if (a>0.0 && b>0.0){
         cout << "Q1" <<endl;
     }
     else if (a<0.0 && b>0.0){
         cout << "Q2" <<endl;
     }
     else if(a<0.0 && b<0.0){
         cout << "Q3" <<endl;
     }
     else if (a>0.0 && b<0.0){
         cout << "Q4" <<endl;
     }

    return 0;
}
