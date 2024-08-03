#include <iostream>

using namespace std;

int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
       int N;
       cin >> N;
       cout << N << endl;
       int remainder1 = N % 100;
       int divident = (N - remainder1) / 100;
       cout<<divident<<" nota(s) de R$ 100,00"<<endl;

       int remainder2 = remainder1 % 50;
       int divident2 = (remainder1 - remainder2) / 50;
       cout<<divident2<<" nota(s) de R$ 50,00"<<endl;

       int remainder3 = remainder2 % 20;
       int divident3 = (remainder2 - remainder3) / 20;
       cout<<divident3<<" nota(s) de R$ 20,00"<<endl;

       int remainder4 = remainder3 % 10;
       int divident4 = (remainder3 - remainder4) / 10;
       cout<<divident4<<" nota(s) de R$ 10,00"<<endl;

       int remainder5 = remainder4 % 5;
       int divident5 = (remainder4 - remainder5) / 5;
       cout<<divident5<<" nota(s) de R$ 5,00"<<endl;

       int remainder6 = remainder5 % 2;
       int divident6 = (remainder5 - remainder6) / 2;
       cout<<divident6<<" nota(s) de R$ 2,00"<<endl;

       int divident7 = remainder6  /  1;
       cout<<divident7<<" nota(s) de R$ 1,00"<<endl;

    return 0;
}
