// Check the user age is greater than 18 or not if user age is greater than 18 print adult else print teenager

#include<iostream>
using namespace std;
int main(){
    int age;
    cout << "Enter your age: ";
    cin >> age;
    if(age > 18){
        cout << "Adult" << endl;
    } else {
        cout << "Teenager" << endl;
    }
}