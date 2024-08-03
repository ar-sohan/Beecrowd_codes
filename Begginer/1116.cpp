#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     int n;
     double x, y;
     cin >> n;
     for (int i=0; i<n; i++){
     cin >> x >> y;
     if(y == 0){
         cout << "divisao impossivel" << endl;
     }
     else {
         cout << fixed << setprecision(1)<<(x/y)<<endl;
     }
     x=0;
     y=0;
     }
    return 0;
}
