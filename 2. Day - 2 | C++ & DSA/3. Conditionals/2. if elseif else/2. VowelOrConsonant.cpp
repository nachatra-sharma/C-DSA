// Check the entered character is vowel or consonant 

#include<iostream>
using namespace std;
int main(){
    char c;
    cout << "Enter any character: ";
    cin >> c;
    if(c == 'a') {
        cout << "Vowel" << endl;
    } else if(c == 'e'){
        cout << "Vowel" << endl;
    } else if(c == 'i'){
        cout << "Vowel" << endl;
    } else if(c == 'o'){
        cout << "Vowel" << endl;
    } else if(c == 'u'){
        cout << "Vowel" << endl;
    } else {
        cout << "Consonant" << endl;
    }
}