#include <bits/stdc++.h>
using namespace std;

int main(){
    double n;
    cin >> n;
    double sum = 0;
    double counter = 0;
    while(n>0){
        sum += n;
        cin >> n;
        counter++;
    }
    double average = sum / counter ;
    cout << fixed << setprecision(2) ;
    cout << average << endl;
    return 0;
}
