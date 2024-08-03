#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     double salary;
     cin >> salary;
     double increase;
     if (salary>4500){
        increase = (salary - 4500) * 0.28;
        increase += (1500 * 0.18) + (1000 * 0.08);
        cout << "R$ " << fixed << setprecision(2) << increase << endl;
     }
     if (salary>3000 && salary<=4500){
         increase = (salary - 3000) * 0.18;
         increase += (1000 * 0.08);
         cout << "R$ " <<  fixed << setprecision(2) <<increase << endl;
     }
     if (salary>2000 && salary<=3000){
         increase = (salary - 2000) * 0.08;
         cout << "R$ " <<  fixed << setprecision(2) << increase << endl;
     }
     if (salary <= 2000){
         cout << "Isento" << endl;
     }
    return 0;
}
