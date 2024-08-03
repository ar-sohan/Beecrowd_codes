#include <iostream>
#include <iomanip>
using namespace std;

int main() {
     int num, hour;
     float money;
     cin >> num >> hour >> money;
     float salary = hour * money;
     cout << "NUMBER = " << num << endl;
     cout <<"SALARY = U$ " <<fixed << setprecision(2) << salary << endl;
    return 0;
}
