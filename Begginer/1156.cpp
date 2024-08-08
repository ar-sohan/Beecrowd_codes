#include <bits/stdc++.h>
using namespace std;

int main(){
    double result = 0, a = 1, b = 1;
    while(a<=39){
        result += (a/b);
        a += 2;
        b *= 2;
    }
    cout << fixed << setprecision(2) << result << endl;
    return 0;
}
