#include <iostream>

using namespace std;

int main() {

    /**
     * Escreva a sua solu��o aqui
     * Code your solution here
     * Escriba su soluci�n aqu�
     */
    int n;
    cin >> n;
    int j = 1;
    while(j <= n*4){
        if (j%4 != 0){
            cout << j << " ";}
        else {
            cout << "PUM" << endl;}
            j++;
        }

    return 0;
}
