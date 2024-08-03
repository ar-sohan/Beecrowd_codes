#include <iostream>

using namespace std;

int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     int h1, s1, h2, s2;
     cin >> h1 >> s1;
     cin >> h2 >> s2;
     int t1 = (h1*60) + s1;
     int t2 = (h2*60) + s2;
     int durom;
     int duro;
     if (t1>t2){
         durom = (t2+1440) - t1;
     }
     else if (t2>t1){
         durom = t2 - t1;
     }
     else if(t1==t2){
         durom = 1440;
     }
     duro = durom / 60;
     durom = durom % 60;
     cout <<"O JOGO DUROU "<< duro <<" HORA(S) E "<< durom <<" MINUTO(S)"<<endl;
    return 0;
}
