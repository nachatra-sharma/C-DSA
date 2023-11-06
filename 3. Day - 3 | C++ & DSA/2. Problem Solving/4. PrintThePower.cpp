#include<iostream>
using namespace std;
int main() {
    int number, power, answer = 1;
    cout << "Enter the number: ";
    cin >> number;
    cout << "Enter the power: ";
    cin >> power;
    for(int i = 1; i <= power; i++){
        answer *= number;
    }
    cout << answer << endl;
}

