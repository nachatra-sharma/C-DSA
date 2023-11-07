#include<iostream>
using namespace std;
int main() {
    int last = 0, prev = 1, current = 0, n;
    cout << "Enter the number of Fibonacci numbers you want to generate: ";
    cin >> n;
    if(n < 2){
        cout << "Fibonacco Series at least need 2 number." << endl;
        return 1;
    }
    cout << last << endl << prev << endl;
    for(int i = 1; i <= n - 2; i++){
        current = last + prev;
        last = prev;
        prev = current;
        cout << current << endl;
    }
    return 0;
}