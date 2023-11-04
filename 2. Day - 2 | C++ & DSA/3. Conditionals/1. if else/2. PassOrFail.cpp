// Take marks as input the check if marks is greater than 33 if yes then say pass or else say failed.

#include<iostream>
using namespace std;
int main(){
    int marks;
    cout << "Enter your marks: ";
    cin >> marks;
    if(marks > 33){
        cout << "Pass"<< endl;
    } else {
        cout << "Fail"<< endl;
    }
}