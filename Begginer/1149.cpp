#include <iostream>
#include <sstream>
using namespace std;

int main(){
    int a, n;
    string input;
    getline(cin, input);
    stringstream ss(input);
    ss >> a >> n;
    while(n<=0){
        cin >> n;
    }
    int sum;
    for(int i=0; i<n; i++){
        sum += (a+i);
    }
    cout << sum << endl;
    return 0;
}
