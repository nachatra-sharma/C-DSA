/*

for n = 6

          *   
        *   *   
      *   *   *   
    *   *   *   *   
  *   *   *   *   *   
*   *   *   *   *   *

*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the value of row: ";
    cin >> n;

    for(int row = 1; row <= n; row++){
        int space = n - row;
        for(int col = 1; col <= space; col++){
            cout << "  ";
        }
        int star =  row;
        for(int col = 1; col <= star; col++){
            cout << "* ";
            cout << "  ";
        }
        cout<< endl;
    }
}