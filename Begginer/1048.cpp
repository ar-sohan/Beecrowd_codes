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
     double nsalary, increase;
     int rate;
     if(salary >= 0 && salary <= 400){
         rate = 15;
         increase = salary*0.15;
         nsalary = salary + increase;
     }
     else if(salary > 400 && salary <= 800){
         rate = 12;
         increase = salary*0.12;
         nsalary = salary + increase;
     }
     else if(salary > 800 && salary <= 1200){
         rate = 10;
         increase = salary*0.10;
         nsalary = salary + increase;
     }
     else if(salary > 1200 && salary <= 2000){
         rate = 7;
         increase = salary*0.07;
         nsalary = salary + increase;
     }
     else if(salary > 2000){
         rate = 4;
         increase = salary*0.04;
         nsalary = salary + increase;
     }

     cout <<"Novo salario: "<< fixed << setprecision(2) << nsalary << endl;
     cout <<"Reajuste ganho: "<< fixed << setprecision(2) << increase << endl;
     cout << "Em percentual: "<< rate << " %" << endl;
    return 0;
}
