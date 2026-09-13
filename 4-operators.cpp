// OPERATORS IN CPP
#include <iostream>
using namespace std;

int main()
{

    // there are different types of operators in cpp :

    // arithmetic operators ( +, -, *, /, % ) used for mathematical calculations

    int a = 10, b = 5;
    cout << a + b << endl;  // addition
    cout << a - b << endl;  // subtraction
    cout << a * b << endl;  // multiplication
    cout << a / b << endl;  // division
    cout << 10 % 3 << endl; // modulus --> gives remainder of division


    // assignment operators ( =, +=, -=, *=, /=, %= ) used to assign or update values

    int c = 10; // simple assignment

    // compound assignment operators ( +=, -=, *=, /=, %= )
    c += 5; // c = c + 5
    cout << c << endl;
    c -= 3; // c = c - 3
    cout << c << endl;
    c *= 2; // c = c * 2
    cout << c << endl;
    c /= 4; // c = c / 4
    cout << c << endl;
    c %= 3; // c = c % 3
    cout << c << endl;
    

    return 0;
}