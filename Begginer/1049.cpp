#include <iostream>

using namespace std;

int main() {

    /**
     * Escreva a sua solu��o aqui
     * Code your solution here
     * Escriba su soluci�n aqu�
     */
     string a, b, c;
     cin >> a;
     cin >> b;
     cin >> c;
     if (a == "vertebrado") {
         if (b == "ave"){
             if (c == "carnivoro"){
                 cout << "aguia" << endl;
             }
             else{
                 cout << "pomba" << endl;
             }
         }
         else{
             if (c == "onivoro"){
                 cout << "homem" << endl;
             }
             else{
                 cout << "vaca" << endl;
             }
         }
     }
     else{
         if (b == "inseto"){
             if (c == "hematofago"){
                 cout << "pulga" << endl;
             }
             else{
                 cout << "lagarta" << endl;
             }
         }
         else{
             if (c == "hematofago"){
                 cout << "sanguessuga" << endl;
             }
             else{
                 cout << "minhoca" << endl;
             }
         }
     }

    return 0;
}
