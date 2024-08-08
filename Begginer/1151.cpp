#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int first = 0;
    int second = 1;
    int counter = 2;
    cout << first << " " << second << " ";
    while(counter < n){
        int output = first + second;
        if(counter  < n-1){
            cout << output << " ";
        }
        else{
            cout << output;
        }
        int temp = second;
        second = first + second;
        first = temp;
        counter++;
    }
    cout << endl;
    return 0;
}
