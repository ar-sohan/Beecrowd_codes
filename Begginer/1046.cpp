#include <iostream>

using namespace std;

int main() {

    /**
     * Escreva a sua solu��o aqui
     * Code your solution here
     * Escriba su soluci�n aqu�
     */
     int a, b;
     cin >> a >> b;
     int duro;
     if (a>b){
         duro = (b+24) - a;
     }
     else if (a<b) {
         duro = (b - a);
     }
     else if(a == b){
         duro = 24;
     }
     cout <<"O JOGO DUROU " << duro << " HORA(S)" << endl;

    return 0;
}
