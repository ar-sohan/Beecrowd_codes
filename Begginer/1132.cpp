#include <iostream>

using namespace std;

int main() {

    /**
     * Escreva a sua solu��o aqui
     * Code your solution here
     * Escriba su soluci�n aqu�
     */
     int a, b;
     cin >> a >> b;
     int sum = 0;
     if (a>b){
         for (int i=b; i<=a; i++){
             if (i%13 != 0){
                 sum += i;}}
     }
     else if (b>a){
         for (int i=b; i<=a; i++){
             if (i%13 != 0){
                 sum += i;}}
     }
 cout << sum << endl;
    return 0;
}
