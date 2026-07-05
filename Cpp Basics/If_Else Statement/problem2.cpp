#include <iostream>
using namespace std;
// switch case
int main() {
    int day;
    cin >> day;
    switch(day){
        case 1:
            cout << "MONDAY";
            break;
        case 2:
            cout << "TUESDAY";
            break;
        case 3:
            cout << "WEDNESDAY";
            break;
        case 4:
            cout << "THRUSDAY";
            break;
        case 5:
            cout << "FRIDAY";
            break;
        case 6:
            cout << "SATURDAY";
            break;
        case 7:
            cout << "SUNDAY";
            break;
    }
    return 0;
}