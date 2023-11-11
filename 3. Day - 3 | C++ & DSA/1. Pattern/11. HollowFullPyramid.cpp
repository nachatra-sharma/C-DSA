/*

pattern for n = 6

          *           
        *   *         
      *       *       
    *           *     
  *               *   
* * * * * * * * * * * 

*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int row = 1; row <= n; row++){
        for(int col = 1; col <= n; col++){
            if(row == n || col == (n - row) + 1){
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        for(int col = 1; col <= n - 1; col++){
            if(row == n || col == row - 1){
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}