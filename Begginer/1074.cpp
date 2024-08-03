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
     int arr[N];
     for(int i = 0; i<N; i++){
         cin >> arr[i];}
     for(int i = 0; i<N; i++){
         if (arr[i] % 2 == 0 && arr[i] != 0){
             cout << "EVEN" <<" ";}
        if (arr[i] % 2 != 0){
             cout << "ODD"<<" ";}
         if (arr[i] > 0){
             cout << "POSITIVE";}
         if (arr[i] < 0){
             cout << "NEGATIVE";}
         if (arr[i] == 0){
             cout << "NULL";}
         cout << endl;
     }

    return 0;
}
