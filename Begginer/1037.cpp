#include <iostream>

using namespace std;

int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     double N;
     cin >> N;
     double a, b, c, d, e;
     a = 0;
     b = 25;
     c = 50;
     d = 75;
     e = 100;
     if(N>=0 && N<=b){
         cout << "Intervalo [0,25]" << endl;
     }
     else if(N>b && N<=c){
         cout << "Intervalo (25,50]" << endl;
     }
     else if(N>c && N<=d){
         cout << "Intervalo (50,75]" << endl;
     }
     else if(N>d && N<=e){
         cout << "Intervalo (75,100]" << endl;
     }
     else {
         cout << "Fora de intervalo" << endl;
     }
    return 0;
}
