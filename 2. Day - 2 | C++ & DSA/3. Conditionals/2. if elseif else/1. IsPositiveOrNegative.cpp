// Take one number as input then find out the number is +ve -ve or zero

#include<iostream>
using namespace std;
int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if(num > 0){
        cout << "Number is positive" << endl;
    } else if(num == 0) {
        cout << "Number is zero" << endl;
    } else {
        cout << "Number is negative" << endl;
    }
}
