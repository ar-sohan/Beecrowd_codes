#include <iostream>

using namespace std;

int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     double a;
     int a2, rest, rest1;
     cin >> a;
     a2 = a;
     rest1 = (a * 100) - (a2 * 100) ;

     cout << "NOTAS:"<<endl;
     cout << a2 / 100 <<" nota(s) de R$ 100.00" << endl;
     rest = a2 % 100;
     cout << rest / 50 <<" nota(s) de R$ 50.00" << endl;
     rest = rest % 50;
     cout << rest / 20  <<" nota(s) de R$ 20.00" << endl;
     rest = rest % 20;
     cout << rest  / 10  <<" nota(s) de R$ 10.00" << endl;
     rest = rest % 10;
     cout <<  rest / 5 <<" nota(s) de R$ 5.00" << endl;
     rest = rest % 5;
     cout << rest / 2 <<" nota(s) de R$ 2.00" << endl;
     rest = rest % 2;

     cout <<"MOEDAS:" << endl;
     cout << rest / 1 << " moeda(s) de R$ 1.00" << endl;
     cout <<  rest1 / 50   << " moeda(s) de R$ 0.50" << endl;
     rest1 =  rest1 % 50 ;
     cout << rest1 / 25 << " moeda(s) de R$ 0.25" << endl;
     rest1 =  rest1 % 25 ;
     cout << rest1 / 10 << " moeda(s) de R$ 0.10" << endl;
     rest1 =  rest1 % 10 ;
     cout << rest1 / 5 << " moeda(s) de R$ 0.05" << endl;
     rest1 =  rest1 % 5 ;
     cout << rest1 / 1<< " moeda(s) de R$ 0.01" << endl;

    return 0;
}
