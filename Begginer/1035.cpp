#include <iostream>
using namespace std;
int main() {
     int A, B, C, D;
     cin >> A >> B;
     cin >> C >> D;
     if((B>C) && (D>A)){
         if((C+D)>(A+B)){
             if ((C>0) && (D>0)){
                 if((A%2 == 0)){
                     cout << "Valores aceitos" << endl;}
                 else{
         cout << "Valores nao aceitos" << endl;}
             }
             else{
         cout << "Valores nao aceitos" << endl;}
         }
         else{
         cout << "Valores nao aceitos" << endl;}
     }
     else{
         cout << "Valores nao aceitos" << endl;}
    return 0;
}
