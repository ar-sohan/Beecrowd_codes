#include <iostream>

using namespace std;

int main() {

    /**
     * Escreva a sua solu��o aqui
     * Code your solution here
     * Escriba su soluci�n aqu�
     */
     int N, rest;
     cin >> N;
     cout << N/3600 << ":";
     rest =(N % 3600);
     cout << rest/60 << ":";
     rest = (rest % 60);
     cout << rest << endl;

    return 0;
}
