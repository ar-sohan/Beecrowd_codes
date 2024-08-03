#include <iostream>

using namespace std;

int main() {
     int a=0;
     while(a<100){
         int pass;
         cin >> pass;
         if(pass == 2002){
             cout << "Acesso Permitido" << endl;
             break;
         }
         else {
             cout << "Senha Invalida" << endl;
         }
         pass = 0;
         a++;
     }
    return 0;
}
