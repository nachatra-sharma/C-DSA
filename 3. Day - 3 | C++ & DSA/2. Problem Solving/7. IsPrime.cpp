#include<iostream>
using namespace std;
int main(){
    int num;
    cout << "Enter the value of num: ";
    cin >> num;
    bool flag = true;
    if(num > 2) {
        for(int i = 2; i <= num - 1; i++) {
            if(num % i == 0){
                flag = false;
            }
        }
        if(flag == true) {
            cout << "It is a prime" << endl;
            return 0;
        } else {
            cout << "It is not a prime" << endl;
            return 0;
        }
    } else {
        cout << "The number is less than 2." << endl;
        return 0;
    }
    return 0;
}