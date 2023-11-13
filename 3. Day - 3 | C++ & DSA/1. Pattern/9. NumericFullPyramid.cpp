/*

when n = 5

        1 
      1 2 1 
    1 2 3 2 1 
  1 2 3 4 3 2 1 
1 2 3 4 5 4 3 2 1 

*/


#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    for(int row = 1; row <= n; row++) {
        int space = n - row;
        for(int col = 1; col <= space; col++) {
            cout << "  ";
        }

        for(int col = 1; col <= row; col++){
            cout << col << " ";
        }
        
        for(int col = row - 1; col >= 1; col--){
            cout << col << " ";
        }
        cout << endl;
    }
}