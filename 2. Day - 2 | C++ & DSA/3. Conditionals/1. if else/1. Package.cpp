// Check if the package is greater than 10 or not

#include<iostream>
using namespace std;

int main(){
    int package;
    cout << "Enter your package: ";
    cin >> package;
    if(package > 10){
        cout << "Accepted"; 
    } else {
        cout << "Rejected";
    }
}
