/*

for n = 5

    * 
   * * 
  * * * 
 * * * * 
* * * * * 
* * * * * 
 * * * * 
  * * * 
   * * 
    * 

*/

#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    for(int row = 1; row <= n; row++){
        for(int col = 1; col <= n - row; col++) {
            cout << " ";
        }
        for(int col = 1; col <= row; col++){
            cout << "* ";
        }
        cout << endl;
    }
    for(int row = 1; row <= n; row++){
        for(int col = 1; col <= row - 1; col++){
            cout << " ";
        }
        for(int col = 1; col <= n - row + 1; col++){
            cout << "* ";
        }
        cout << endl;
    }

}