// Print all even number upto n

#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    for(int i = 2; i <= n; i = i + 2){
        cout << i << endl;
    }
}
 
