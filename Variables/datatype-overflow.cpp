//
// Created by gituser on 2/28/21.
// Data type overflow
#include <iostream>
#include <climits>

using namespace std;

int main () {
    //maximum amount for int
    int intMax = INT_MAX;
    cout << intMax << endl;
    // datatype overflow - rounds off to the minimal integer value
    cout << intMax + 1;
}
