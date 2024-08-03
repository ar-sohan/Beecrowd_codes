#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string name;
    cin >> name;
    double salary, sale;
    cin >> salary >> sale;
    double result = salary + (sale * 0.15);
    cout << "TOTAL = R$ " << fixed << setprecision(2) << result << endl;
    return 0;
}
