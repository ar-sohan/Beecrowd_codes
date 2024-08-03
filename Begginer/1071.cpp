#include <iostream>

using namespace std;

int main() {
     int a, b;
     cin >> a >> b;
     int sum =0;
     if (a>b){
         for(int i=b+1; i<a; i++){
             if(i%2 != 0){
                 sum += i;
             }
         }
     }
     else {
         for(int i=a+1; i<b; i++){
             if(i%2 != 0){
                 sum += i;
             }
         }
     }
     cout << sum << endl;

    return 0;
}
