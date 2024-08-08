#include <iostream>
using namespace std;

int main(){
    string temp;
    int day, hour, minute, second, lDay, lHour, lMinute, lSecond;
    cin >> temp >> day;
    cin >> hour >> temp >> minute >> temp >> second;

    cin >> temp >> lDay;
    cin >> lHour >> temp >> lMinute >> temp >> lSecond;

    int osec = lSecond - second;
    int omin = lMinute - minute;
    int oh = lHour - hour;
    int oday = lDay - day;

    if(osec<0){
	osec+=60;
	omin--;
    }

    if(omin<0){
	omin+=60;
	oh--;
    }

    if(oh<0){
	oh+=24;
	oday--;
    }

    cout << oday << " dia(s)" << endl;
    cout << oh << " hora(s)" << endl;
    cout << omin << " minuto(s)" << endl;
    cout << osec << " segundo(s)" << endl;

    return  0;
}
