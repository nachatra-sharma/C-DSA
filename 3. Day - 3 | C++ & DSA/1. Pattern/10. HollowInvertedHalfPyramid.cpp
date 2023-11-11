/*

pattern when n = 6

* * * * * * 
*       *   
*     *     
*   *       
* *         
* 

*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    for(int row = 1; row <= n; row++){
        for(int col = 1; col <= n; col++){
            if(row == 1){
                cout << "* ";
            } else if(col == 1 || col == (n - row) + 1){
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}