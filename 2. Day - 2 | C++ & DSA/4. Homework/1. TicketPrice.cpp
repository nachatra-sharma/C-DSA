// Ticket price calculator 
// Create a program that asks the user for their age and checks if they qualify for a discount ticket price (e.g. under 12 and over 65 get discounts). if they are eligible print "yes" or "no"

#include<iostream>
using namespace std;
int main(){
    int age;
    cout << "Enter your age: ";
    cin >> age;
    if(age < 12){
        cout << "Yes, you got a discount on your ticket." << endl;
    } else if (age > 65) {
        cout << "Yes, you got a discount on your ticket." << endl;
    } else {
        cout << "No, no discount for your age." << endl;
    }
}
