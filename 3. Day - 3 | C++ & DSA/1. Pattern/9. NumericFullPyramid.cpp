#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    for(int row = 1; row <= n; row++) {
        int lSpace = n - row;
        for(int col = 1; col <= lSpace; col++){
            cout << "  ";
        }
        int numeric = 2 * row - 1;
        for(int col = row; col <= numeric; col++){
            cout << col << " ";
        }
        for(int col = 1; col <= row - 1; col++){
            cout << col << " ";
        }
        int rSpace = (n - row) + 1;
        for(int col = 1; col <= rSpace; col++){
            cout << "  ";
        }
        cout << endl;
    }
}