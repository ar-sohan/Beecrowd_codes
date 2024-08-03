#include <iostream>

using namespace std;

int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int a, b, c=0, x;
    int inter = 0, gremio = 0, empates = 0;
    do{
        cin >> a >>b ;
        if (a>b){
             inter ++;
        }
        else if (b>a){
            gremio  ++;
        }
        else if (a == b){
            empates ++;
        }
        cout << "Novo grenal (1-sim 2-nao)" << endl;
        cin >> x;
        c++;
    }while (x != 2);
   cout << c << " grenais" << endl;
   cout << "Inter:" << inter << endl;
   cout << "Gremio:" << gremio << endl;
   cout << "Empates:" << empates << endl;
   if (inter > gremio){
        cout <<  "Inter venceu mais" << endl;
   }
   else {
         cout <<  "Gremio venceu mais" << endl;
   }
    return 0;
}
