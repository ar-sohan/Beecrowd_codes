#include <iostream>

using namespace std;

int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     int a, b, c;
     cin >> a >> b >> c;
     if(a<b && a<c){
         cout << a << endl;
         if(b < c){
             cout << b << endl;
             cout << c << endl;
         }
         else {
             cout << c << endl;
             cout << b << endl;
         }
     }
     if(b<a && b<c){
         cout << b << endl;
         if(a < c){
             cout << a << endl;
             cout << c << endl;
         }
         else {
             cout << c << endl;
             cout << a << endl;
         }
     }
     if(c<a && c<b){
         cout << c << endl;
         if(b < a){
             cout << b << endl;
             cout << a << endl;
         }
         else {
             cout << a << endl;
             cout << b << endl;
         }
     }
     cout << endl;
     cout << a << endl;
     cout << b << endl;
     cout << c << endl;
    return 0;
}
