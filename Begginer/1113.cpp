#include <iostream>

using namespace std;

int main() {

    /**
     * Escreva a sua solu��o aqui
     * Code your solution here
     * Escriba su soluci�n aqu�
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
