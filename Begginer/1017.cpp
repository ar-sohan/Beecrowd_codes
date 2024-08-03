#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     double a, b;
     cin >> a >> b;
     double liters = (a * b)/ 12;
     cout << fixed << setprecision (3) << liters << endl;

    return 0;
}
