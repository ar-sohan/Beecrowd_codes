#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    double score1, score2;
    int x = 1;

    while (x != 2) {
        int validScores = 0;
        double sum = 0.0;

        while (validScores < 2) {
            cin >> score1;

            if (score1 < 0.0 || score1 > 10.0) {
                cout << "nota invalida" << endl;
            } else {
                sum += score1;
                validScores++;
            }
        }

        double average = sum / 2.0;
        cout << "media = " << fixed << setprecision(2) << average << endl;

        do {
            cout << "novo calculo (1-sim 2-nao)" << endl;
            cin >> x;
        } while (x != 1 && x != 2);
    }
    return 0;
}
