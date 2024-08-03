#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     int a;
     cin >> a;
     for (int i=0; i<a; i++){
             double x, y, z;
             cin >> x >> y >> z;
             double result = (x*2 + y*3 + z*5);
             cout << fixed << setprecision(1) << result/10 << endl;
             x = 0;
             y = 0;
             z = 0;
     }

    return 0;
}
