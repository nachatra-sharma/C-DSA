/*

for n = 4

//////////////////////////

number of row  = n
and number of col = n + 2

//////////////////////////

* * * * * * 
*         * 
*         * 
* * * * * * 

*/

#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    for(int row = 0; row < n; row++){
        if(row == 0 || row == n - 1){
            for(int col = 0; col < n + 2; col++){
                cout << "* ";
            }
        }
        else {
            cout << "* ";
            for(int col = 0; col < n; col++){
                cout << "  "; 
            }
            cout << "* ";
        }
        cout << endl;
    }
}