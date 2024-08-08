#include <iostream>
using namespace std;

int main(){
    int n, limit = 0;
    cin >> n;
    while(limit < n){
        int a, b;
        cin >> a >> b;
        int result = 0;
        int counter = 1;
        while(counter <= b){
            if(a % 2 != 0){
                result += a;
                counter++;
            }
            a++;
        }
        cout << result << endl;
        limit++;
    }
    return 0;
}
