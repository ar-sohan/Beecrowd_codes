#include <iostream>

using namespace std;

int main() {

    /**
     * Escreva a sua solu��o aqui
     * Code your solution here
     * Escriba su soluci�n aqu�
     */
     int a;
     cin >> a;
     for (int i=0; i<10000; i++){
         if (i % a == 2){
             cout << i << endl;
         }
     }

    return 0;
}
