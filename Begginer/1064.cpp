#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     double arr[6];
     for (int i=0; i<6; i++){
         cin >> arr[i];
     }
     int a = 0;
     double sum = 0;
     for (int i=0; i<6; i++){
         if (arr[i] > 0){
             a += 1;
             sum += arr[i];
         }
     }
     double average = sum / a;
     cout << a << " valores positivos" << endl;
     cout << fixed << setprecision(1) << average << endl;

    return 0;
}
