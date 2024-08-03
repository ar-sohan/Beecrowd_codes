#include <iostream>

using namespace std;

int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     int num[100];
     int highest = 0, count = 0;
     for (int i=0; i<100; i++){
         cin >> num[i];
     }
     for (int i=0; i<100; i++){
         if (num[i]>highest){
             highest = num[i];
             count = i + 1;
         }

     }
     cout << highest << endl;
     cout << count << endl;
    return 0;
}
