#include <bits/stdc++.h>
using namespace std;

int main(){
    double result = 0, n = 1;
    while(n <= 100){
        result += (1/n);
        n++;
    }

    cout << fixed << setprecision(2) << result << endl;

    return 0;
}
