#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     int n;
     cin >> n;
     int a;
     double c=0, r=0, s=0, total=0;
     char x;
     for (int i=0; i<n; i++){
         cin >> a >> x;
         total += a;
         if (x == 'C' || x == 'c'){
             c += a;
         }
         else if (x == 'S' || x == 's'){
             s += a;
         }
         else if (x == 'R' || x == 'r'){
             r += a;
         }
         a = 0;
         x =' ';
     }
     double cp = (c*100)/total;
     double rp = (r*100)/total;
     double sp = (s*100)/total;
     cout << "Total: " << total << " cobaias" << endl;
     cout << "Total de coelhos: " << c << endl;
     cout << "Total de ratos: " << r << endl;
     cout << "Total de sapos: " << s << endl;
     cout << "Percentual de coelhos: " << fixed << setprecision(2) << cp << " %" << endl;
     cout << "Percentual de ratos: " << fixed << setprecision(2) << rp << " %" << endl;
     cout << "Percentual de sapos: " << fixed << setprecision(2) << sp << " %" << endl;
    return 0;
}
