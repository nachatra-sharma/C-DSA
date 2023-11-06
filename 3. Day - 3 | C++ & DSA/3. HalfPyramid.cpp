/*

for n = 5

* 
* * 
* * * 
* * * * 
* * * * * 

*/

#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the row number: ";
    cin >> n;
    for(int row = 0; row < n; row++) {
        for(int col = 0; col < row + 1; col++){
            cout << "* ";
        }
        cout << endl;
    }
}
