#include <iostream>

using namespace std;

int main() {
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     int alcho = 0, gas = 0, dis = 0;
     int inpu;
     do{
         cin >> inpu;
         if (inpu == 1){
             alcho += 1;
         }
         else if (inpu == 2){
             gas += 1;
         }
         else if (inpu == 3){
             dis += 1;
         }
     }while (inpu !=4 || inpu < 4);
 cout << "MUITO OBRIGADO" << endl;
 cout << "Alcool: " << alcho << endl;
 cout << "Gasolina: " << gas << endl;
 cout << "Diesel: " << dis << endl;
    return 0;
}
