#include <iostream>
#include <iomanip>
using namespace std;

int main() {
     double A, B, C;
     cin >> A >> B >> C;
     double tarea = 0.5 * A * C;
     cout << "TRIANGULO: " << fixed << setprecision(3) << tarea << endl;
     double carea = 3.14159 * C * C;
     cout << "CIRCULO: " << fixed << setprecision(3) << carea << endl;
     double trarea = ((A+B)/2) * C;
     cout << "TRAPEZIO: " << fixed << setprecision(3) << trarea << endl;
     double sarea = B * B;
     cout << "QUADRADO: " << fixed << setprecision(3) << sarea << endl;
     double rarea = A * B;
     cout << "RETANGULO: " << fixed << setprecision(3) << rarea << endl;

    return 0;
}
