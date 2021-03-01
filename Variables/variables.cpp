//
// Created by gituser on 2/28/21.
// All about variables
#include <iostream>
using namespace std;

int main () {
    //float variable
    //float annualSalary = 50000.99;
    float annualSalary;
    cout << "Please enter your annual salary  (in dollars): " << endl;
    cin >> annualSalary;
    float monthlySalary = annualSalary / 12;
    cout << "Your monthly salary is $" << monthlySalary << endl;
    cout << "In ten years you will earn $" << annualSalary * 10;

    char character = 'a';
    return 0;
}

