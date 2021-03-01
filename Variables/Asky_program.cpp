//
// Created by gituser on 2/28/21.
// Variables programming exercise
#include <iostream>
using namespace std;

int main () {
    //ciphering 5 word character
    char c1, c2, c3, c4, c5;
    cout << "Enter 5 letters: " << endl;
    cin >> c1 >> c2 >> c3 >> c4 >> c5;
    cout << "ACSII message: " << int(c1) << " " << int(c2) << " " << int(c3) << " " << int(c4) << " " << int(c5) << endl;

    // decipher the message again
    cout << "The decoded message is: " << c1 << c2 << c3 << c4 << c5 << endl;
    return 0;
}

