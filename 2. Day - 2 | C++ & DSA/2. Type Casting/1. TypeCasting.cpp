// there are two type of type conversion
// 1. Implicite type conversion ===>>> done by compilers 
// 2. Explicite type conversion ===>>> done by user / programmer

// bool => char => int => double (no data lose)
// double ==> int (data lose can occur)

// Implicite type conversion

#include<iostream>
using namespace std;
int main() {
    int a = 70;
    char c = 'a';
    int sum = a + c; // here automatically type conversion take place ===>> sum = 70 + 97 ===>> a converted to 97
    cout << sum << endl;
}

