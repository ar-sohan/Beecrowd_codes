#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    double A, B, C;
    cin >> A >> B >> C;

    // Arrange the sides in decreasing order
    if (A < B) swap(A, B);
    if (A < C) swap(A, C);
    if (B < C) swap(B, C);

    // Determine the type of triangle
    if (A >= B + C) {
        cout << "NAO FORMA TRIANGULO" << endl;
    } else {
        double A2 = A * A;
        double B2 = B * B;
        double C2 = C * C;

        if (A2 == B2 + C2) {
            cout << "TRIANGULO RETANGULO" << endl;
        }
        if (A2 > B2 + C2) {
            cout << "TRIANGULO OBTUSANGULO" << endl;
        }
        if (A2 < B2 + C2) {
            cout << "TRIANGULO ACUTANGULO" << endl;
        }
        if (A == B && B == C) {
            cout << "TRIANGULO EQUILATERO" << endl;
        }
        else if (A == B || B == C || A == C) {
            cout << "TRIANGULO ISOSCELES" << endl;
        }
    }

    return 0;
}

