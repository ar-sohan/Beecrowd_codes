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
     for (int i=1; i<=n; i++){
        for (int j=i; j<=i; j++){
             cout << i << " " << i*j << " " << i*j*j << endl;
             cout << i << " " << (i*j)+1 << " " << (i*j*j)+1 << endl;
         }
     }
    return 0;
}
