// take input from user 1 - 7 then check which day is coming 

#include<iostream>
using namespace std;
int main() {
    int week;
    cout << "Enter week number: ";
    cin >> week;

    if(week == 1) {
        cout << "Monday" << endl;
    } else if(week == 2){
        cout << "Tuesday" << endl;
    } else if(week == 3) {
        cout << "Wednesday" << endl;
    } else if(week == 4) {
        cout << "Thuresday" << endl;
    } else if(week == 5) {
        cout << "Friday" << endl;
    } else if(week == 6) {
        cout << "Saturday" << endl;
    } else if(week == 7) {
        cout << "Sunday" << endl;
    } else {
        cout << "You entered wrong week number" << endl;
    }
}
