// Take 2 number from user then calculate which one is greater

#include<iostream>
using namespace std;
int main(){
    int a, b;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    if(a > b){
        cout << "a is greater than b" << endl;
    } else {
        cout << "b is greater than a" << endl;
    }
}