// VARIABLES IN C++

#include <iostream>
using namespace std;
int main()
{
    // before making a variables remember the rules

    int myAge;  // this is a variable declaration
    myAge = 21; // this is variable initialization
    cout << "My age is: " << myAge << endl;

    int marksInMaths = 90; // variable declared & initialized here
    marksInMaths = 9;
    cout << "Marks in Maths: " << marksInMaths;

    // const
    const int daysInWeek = 7; // const stands for constant 
    // after const is initialized with a variable, the value cannot be changed
    // it is helpful when we don't want to change something at all

    return 0;
}