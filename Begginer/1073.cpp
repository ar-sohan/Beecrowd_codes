#include <iostream>

using namespace std;

int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     int N;
     cin >> N;
     for(int i=1; i<=N; i++){
         if (i%2 == 0){
             cout << i << "^" << 2 <<" = " << i*i << endl;
         }
     }

    return 0;
}
