#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     double sum = 0, media, x;
     int count = 0;
     while (count < 2){
         cin >> x;
         if (x<0 || x>10){
             cout << "nota invalida" << endl;
         }
         else {
             sum += x;
             count++;
         }
         x = 0;
     }
     media = sum / 2;
     cout << "media = " <<fixed<<setprecision(2)<<media<<endl;
    return 0;
}
