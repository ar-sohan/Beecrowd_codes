#include <iostream>
#include <iomanip>
using namespace std;

int main() {
     double a, b;
     cin >> a >> b;
     double average = ((a * 3.5) + (b * 7.5)) / 11;
     cout << "MEDIA = " << fixed << setprecision(5)<< average << endl;
    return 0;
}
