//
// Created by gituser on 2/28/21.
// Data Types
#include <iostream>
#include <climits>

using namespace std;

int main()
{
    //integer
    int yearOfBirth = 2001;
    //character
    char gender = 'm';
    //boolean
    bool isOlderThan18 = true;
    //float - (4 bytes)
    float averageGrade = 4.5;
    //double - it's the double size of float (8 bytes)
    double balance = 43395639843579;

    //sizes of the data types
    //size of  integer
    cout << "Size of int is: " << sizeof(int) << " bytes" << endl;
    //-1,-2,-3,...,-2147483648 (negative integer range)
    cout << "Int min value is: " << INT_MIN << endl;
    //0,1,2,3,...,2147483647 including 0 (positive integer range)
    cout << "Int max value is: " << INT_MAX << endl;
    //positive integer numbers
    cout << "Size of unsigned int: " << sizeof(unsigned int) << endl;
    cout << "UInt max value is: " << UINT_MAX << endl;
    //float size
    cout << "Size of float is: " << sizeof(float) << " bytes" << endl;
    //boolean size
    cout << "Size of boolean is: " << sizeof(bool) << " bytes" << endl;
    //character size
    cout << "Size of character is: " << sizeof(char) << " bytes" << endl;
    // size of double
    cout << "Size of double is: " << sizeof(double) << " bytes" << endl;


    return 0;
}

