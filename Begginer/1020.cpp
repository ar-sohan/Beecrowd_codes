#include <iostream>

using namespace std;

int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     int days, rest;
     cin >> days;
     cout << days/365 << " ano(s)" << endl;
     rest = (days % 365);
     cout << rest / 30 << " mes(es)" << endl;
     rest = (rest % 30);
     cout << rest << " dia(s)" << endl;
    return 0;
}
