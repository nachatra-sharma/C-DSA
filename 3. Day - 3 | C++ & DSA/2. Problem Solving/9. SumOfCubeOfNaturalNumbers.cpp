// ============================ Way 1 ===================================

#include<iostream>
using namespace std;
int main(){
    int n, sumOfCube = 0;
    cout << "Enter the value of n: ";
    cin >> n;
    for(int i = 1; i <= n; i++){
        sumOfCube += (i * i * i);
    }
    cout << sumOfCube << endl;
}


// ============================= Way 2 ================================

#include<iostream>
using namespace std;
int main() {
    int n, sumOfCube;
    cout << "Enter the value of n: ";
    cin >> n;
    sumOfCube = ((n * (n + 1)) / 2) * ((n * (n + 1)) / 2);
    cout << sumOfCube << endl;
}
