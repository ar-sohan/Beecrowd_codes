#include <iostream>

using namespace std;

int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     int a;
     cin >> a;
     int b = a;
     int c = a+1;
     if (a%2 == 1){
         for (int i = 0; i<6; i++){
                cout << b << endl;
                b += 2;
         }
     }
     else {
         for (int i = 0; i<6; i++){
                cout << c << endl;
                c += 2;
         }
     }

    return 0;
}
