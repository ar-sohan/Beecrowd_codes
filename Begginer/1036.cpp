#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {

    /**
     * Escreva a sua solu��o aqui
     * Code your solution here
     * Escriba su soluci�n aqu�
     */
     double a,b,c,t,R1,R2;
     cin>>a>>b>>c;

    if(((b*b)-4*a*c)<0 ||a==0){
        cout<<"Impossivel calcular"<<endl;
    }else{
         t=sqrt((b*b)-4*a*c);
         R1=((-b + t) / (2 * a));
         R2=((-b - t) / (2 * a));
         cout<<fixed;
         cout<<setprecision(5)<<"R1 = "<<R1<<endl;
         cout<<setprecision(5)<<"R2 = "<<R2<<endl;
    }
    return 0;
}
