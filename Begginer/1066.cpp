#include <iostream>

using namespace std;

int main() {
     int arr[5];
     for (int i =0; i<5; i++){
         cin >> arr[i];}
     int a = 0, b = 0, c = 0, d = 0;
     for (int i=0; i<5; i++){
         if (arr[i] % 2 == 0){
             a += 1;}
         if (arr[i] % 2 != 0){
             b += 1;}
         if (arr[i] > 0){
             c += 1;}
         if (arr[i] < 0){
             d += 1;}
        }
        cout << a <<" valor(es) par(es)" << endl;
        cout << b << " valor(es) impar(es)" << endl;
        cout << c << " valor(es) positivo(s)" << endl;
        cout << d << " valor(es) negativo(s)" << endl;
    return 0;
}
