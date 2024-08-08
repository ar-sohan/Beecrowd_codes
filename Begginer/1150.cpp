#include <iostream>
using namespace std;

int main(){

    int x;
    int z;

    cin >> x;
    do{
        cin >> z;
    } while(z <= x);

    int result = 0;
    int counter = 0;

    while(result <= z){
        result += x;
        x++;
        ++counter;
    }

    cout << counter << endl;

    return 0;
}
