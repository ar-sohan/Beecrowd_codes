#include <iostream>

using namespace std;

int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     int n=0;
     int a, b;
     while (n < 100000){
         cin >> a >> b;
         if (a == b){
             break;
         }
         else if (a > b){
             cout << "Decrescente" << endl;
         }
         else if (a < b){
             cout << "Crescente" << endl;
         }
         a=0;
         b=0;
         n++;
     }

    return 0;
}
