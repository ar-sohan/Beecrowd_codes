#include <iostream>

using namespace std;

int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     int a;
    cin >> a;
    int b , c, sum =0;
    for (int i=0; i<a; i++){
        cin >>b >> c;
        if (b<c){
        for (int i = b+1; i<c; i++){
            if (i%2 != 0){
                sum += i;}}
        }
        else if (c < b){
             for (int i = c+1; i<b; i++){
            if (i%2 != 0){
                sum += i;}}
        }
        else if (b==c){
            sum = 0;
        }
        cout << sum << endl;
        b=0;
        c=0;
        sum = 0;
    }

    return 0;
}
