#include <iostream>

using namespace std;

int main() {

    /**
     * Escreva a sua solu��o aqui
     * Code your solution here
     * Escriba su soluci�n aqu�
     */
     double arr[6];
     int a=0;
     for(int i = 0; i<6; i++){
         cin >> arr[i];
     }
     for(int i = 0; i<6; i++){
         if (arr[i] > 0){
             a+=1;
         }
     }
     cout << a << " valores positivos" << endl;

    return 0;
}
