/*

for n = 4

   * 
  * * 
 *   * 
*     * 
*     * 
 *   * 
  * * 
   *

*/

#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for(int row = 1; row <= n; row++){
        for(int col = 1; col <= n - row; col++){
            cout << " ";
        }
        for(int col = 1; col <= row; col++) {
            if(col == 1 || col == row){
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    for(int row = 1; row <= n; row++){
        for(int col = 1; col <= row - 1; col++){
            cout << " ";
        }
        for(int col = 1; col <= n - row + 1; col++) {
            if(col == 1 || col == n - row + 1){
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}