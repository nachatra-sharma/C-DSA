// =============================== Way 1 =====================================


#include<iostream>
using namespace std;
int main() {
    int n, square = 0;
    cout << "Enter the value of n: ";
    cin >> n;
    for(int i = 1; i <= n; i++){
        square += i*i; 
    }
    cout << square << endl; 
}



// ====================================== Way 2 ===============================

#include<iostream>
using namespace std;
int main(){ 
    int n, square;
    cout << "Enter the value of n: ";
    cin >> n;
    square = (n * (n + 1) * (2 * n + 1)) / 6;
    cout << square << endl;
}


