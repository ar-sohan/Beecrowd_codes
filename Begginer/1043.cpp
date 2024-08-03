#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     double a, b, c;
     cin >> a >> b >> c;
     if (((a+b) <= c) || ((a+c) <= b) || ((b+c) <= a)){
         double area = ((a+b)/2)*c;
         cout << "Area = " << fixed << setprecision(1) << area << endl;
     }
     else {
         double perimeter = a+b+c;
         cout << "Perimetro = " << fixed << setprecision(1) << perimeter << endl;
     }
    return 0;
}
