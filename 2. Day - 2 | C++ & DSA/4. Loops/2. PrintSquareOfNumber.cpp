// print square of n natural numbers

#include<iostream>
using namespace std;
int main(){ 
    int num;
    cout << "Enter a number here: ";
    cin >> num;
    for(int i = 1; i <= num; i = i + 1){
        cout << "Square of " << i << " is " << i * i << endl;
    }
}
