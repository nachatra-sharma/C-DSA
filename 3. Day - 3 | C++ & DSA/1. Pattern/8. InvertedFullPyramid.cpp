/*

for n = 6

*   *   *   *   *   *   
  *   *   *   *   *   
    *   *   *   *   
      *   *   *   
        *   *   
          *  

*/

#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of n: ";
    cin >> n;
    for(int row = 1; row <= n; row++) {
        int space = row - 1;
        for(int col = 1; col <= space; col++) {
            cout << "  ";
        }
        int star = (n - row) + 1;
        for(int col = star; col >= 1; col--){
            cout << "* ";
            cout << "  ";
        }
        cout << endl;
    }
}