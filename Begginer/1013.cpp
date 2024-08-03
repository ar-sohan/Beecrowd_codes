#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int max = a;
    if (b > a){
        max = b;
    }
    else if (c > a){
        max = c;
    }
    cout << max <<" eh o maior" << endl;
    return 0;
}
