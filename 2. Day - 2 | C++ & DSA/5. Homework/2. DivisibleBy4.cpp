// Print all numbers from 1 to n which is divisible by 4. take n as an input from the user.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    for(int i = 4; i <= n; i = i + 4){
        cout << "Number which is divisible by 4 is " << i << endl;
    }
}

