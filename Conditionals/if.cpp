//
// Created by gituser on 2/28/21.
// if statements
#include <iostream>

using namespace std;

int main () {
    // user enters integer number
    // program writes out if that number is even or odd

    int num;
    cout << "Please enter a whole number: " << endl;
    cin >> num;

    //if-else
    if(num % 2 == 0) {
        cout << "Your number is even." << endl;
    } else {
        cout << "You have entered an odd number." << endl;
    }
    cout << "Thanks, Bye!!" << endl;

    return 0;
}

