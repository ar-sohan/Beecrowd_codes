#include <iostream>

using namespace std;

int main() {

    /**
     * Escreva a sua solu��o aqui
     * Code your solution here
     * Escriba su soluci�n aqu�
     */
     int arr[5];
     for (int i =0; i<5; i++){
         cin >> arr[i];
     }
     int a = 0;
     for (int i=0; i<5; i++){
         if (arr[i] % 2 == 0){
             a += 1;
         }
     }
     cout << a <<" valores pares" << endl;

    return 0;
}
