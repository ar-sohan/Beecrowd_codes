#include <iostream>

using namespace std;

int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     int a, count=0, count2=0;
     cin >> a;
     int arr[a];
     for (int i=0; i<a; i++){
         cin >> arr[i];
     }
     for (int i=0; i<a; i++){
         if (arr[i]>=10 && arr[i]<=20){
             count += 1;
         }
         else {
             count2 += 1;
         }
     }
     cout << count << " in" << endl;
     cout << count2 << " out" << endl;

    return 0;
}
