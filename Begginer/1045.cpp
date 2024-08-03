#include <iostream>
using namespace std;

int main() {

     int A, B, C;
     cin >> A;
     cin >> B;
     cin >> C;

     if (A >= B + C) {
        cout << "NAO FORMA TRIANGULO" << endl;
     }
     if (A*A ==  B*B + C*C){
        cout << "TRIANGULO RETANGULO" <<endl;
     }
     if (A*A > B*B + C*C){
        cout << "TRIANGULO OBTUSANGULO" <<endl;
     }
     if (A*A < B*B + C*C){
        cout << "TRIANGULO ACUTANGULO" << endl;
     }
     if(A==B && A==C){
        cout << "TRIANGULO EQUILATERO" << endl;
     }
     if(A==B || A==C){
        cout << "TRIANGULO ISOSCELES" << endl;
     }

    return 0;
}
