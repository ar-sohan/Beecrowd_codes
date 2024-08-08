#include <iostream>
using namespace std;

int main(){
        int a;
        cin >> a;
        while(a != 0){
            int result = 0;
            int counter = 0;
            while(counter <= 4){
                if(a % 2 == 0){
                    result += a;
                    counter++;
                }
                a++;
            }
            cout << result << endl;
            cin >> a;
        }
    return 0;
}
