#include <iostream>

using namespace std;

int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int n = 0, a, b;
    int sum = 0;
    while (n < 1000){
        cin >> a >> b;
        if (a <= 0 || b <= 0){
            break;
        }
        else {
            if(a<b){
                for (int i=a; i<=b; i++){
                    sum += i;
                    cout << i << " " ;}}
           else if(b<a){
                for (int i=b; i<=a; i++){
                    sum += i;
                    cout << i << " " ;}}
          else if(b==a){
                for (int i=b; i<=a; i++){
                    sum = 0;
                    cout << i << " " ;}}
         cout << "Sum=" << sum <<endl;
        }
        a = 0;
        b = 0;
        sum = 0;
        n++;
    }

    return 0;
}
