#include <iostream>
#include <iomanip>
using namespace std;

int main() {
     int km;
     double ltr;
     cin >> km >> ltr;
     double milage = km / ltr;
     cout << fixed << setprecision(3) << milage << " km/l" << endl;

    return 0;
}
