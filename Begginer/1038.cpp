#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     int X, Y;
     cin >> X >> Y;
     float prices[6] = {0.00, 4.00, 4.50, 5.00, 2.00, 1.50};
     double cost = prices[X] * Y;
     cout << "Total: R$ " << fixed << setprecision(2) << cost <<endl;

    return 0;
}
