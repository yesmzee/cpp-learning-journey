// OPERATORS IN CPP
#include <iostream>
using namespace std;

int main()
{

    // there are different types of operators in cpp :

    // ARITHMETIC OPERATORS ( +, -, *, /, % ) used for mathematical calculations

    int a = 10, b = 5;
    cout << a + b << endl;  // addition
    cout << a - b << endl;  // subtraction
    cout << a * b << endl;  // multiplication
    cout << a / b << endl;  // division
    cout << 10 % 3 << endl; // modulus --> gives remainder of division

    // ASSIGNMENT OPERATORS ( =, +=, -=, *=, /=, %= ) used to assign or update values

    int c = 10; // simple assignment

    // COMPOUND ASSIGNMENT OPERATORS ( +=, -=, *=, /=, %= )

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

    // COMPARISON OPERATORS ( ==, !=, >, <, >=, <= ) used to compare two values

    int x = 10, y = 20;

    cout << (x == y) << endl; // equal to
    cout << (x != y) << endl; // not equal to
    cout << (x > y) << endl;  // greater than
    cout << (x < y) << endl;  // less than
    cout << (x >= y) << endl; // greater than or equal to
    cout << (x <= y) << endl; // less than or equal to

    // LOGICAL OPERATORS ( &&, ||, ! ) used to combine conditions in conditional statements

    int j = 10, k = 20, l = 30;
    cout << (j < k && k < l) << endl; // if both conditions are true then it will return true (1)
    cout << (j < k || k > l) << endl; // if any one condition is true then it will return true (1)
    cout << !(j > k) << endl;         // if the condition is false then it will return true (1) & vice versa

    // INCREMENT AND DECREMENT OPERATORS ( ++, -- ) used to increase or decrease the value of a variable by 1

    int m = 10, n = 20;
    cout << m++ << endl;
    // post-increment --> first it will print the value of m and then it will increase the value of m by 1
    cout << ++n << endl;
    // pre-increment --> first it will increase the value of n by 1 and then it will print the value of n

    cout << --m << endl; // post-decrement
    cout << --n << endl; // pre-decrement

    // BITWISE OPERATORS ( &, |, ^, ~, <<, >> ) used to perform bit-level operations

    int g = 5; // 0101
    int h = 3; // 0011

    cout << (g & h) << endl; // bitwise AND --> 0001 = 1
    cout << (g | h) << endl; // bitwise OR --> 0111 = 7
    cout << (g ^ h) << endl; // bitwise XOR --> 0110 = 6
    cout << (~g) << endl; // bitwise NOT --> 1010 = -6 (in 2's complement form)
    cout << (g << 1) << endl; // left shift --> 1010 = 10
    cout << (g >> 1) << endl; // right shift --> 0010 = 2

    // CONDITIONAL / TERNARY OPERATOR ( ? : ) shorter version of (if-else) expression

    // syntax : condition ? value_if_true : value_if_false
    int age = 18;
    string result = (age >= 18) ? "you are adult" : "you are a minor";
    cout << result << endl;

    // SIZEOF() OPERATOR --> used to find the size of a data type or variable in bytes

    cout << sizeof(int) <<" bytes" << endl;
    cout << sizeof(float) << " bytes" << endl;
    cout << sizeof(double) << " bytes" << endl;
    cout << sizeof(char) << " bytes" << endl;
    cout << sizeof(bool) << " bytes" << endl;

    long double myHeight = 5.9348734233234;
    cout << sizeof(myHeight) << " bytes" << endl;

    // COMMA OPERATOR ( , ) --> used to separate multiple expressions or variables in a single statement

    int a = 5, b = 10, c = 15;
    cout << (a, b, c) << endl; // will print the value of c
    
    // TYPECASTING OPERATOR --> used to convert a variable from one data type to another

    int p = 10;
    float q = 3.14;
    int r = static_cast<int>(q); // typecasting float to int
    cout << r << endl; // will print 3 cuz it will remove the decimal part 

    // ADDRESS & POINTER OPERATORS ( &, * ) --> used to get the address of a variable and to access the value at that address

    int s = 10;
    int *ptr = &s; // pointer variable ptr stores the address of variable s
    cout << "address of s : " << &s << endl;
    cout << "value at address stored in ptr : " << *ptr << endl;

    // MEMBER ACCESS OPERATORS ( ., -> ) --> used to access members of a class or struct

    // Dot . --> used to access members of a class or struct using an object of that class or struct
    // object.member

    // Arrow -> --> used to access members of a class or struct using a pointer to an object of that class or struct
    // pointer->member

    // SCOPE RESOLUTION OPERATOR ( :: ) --> used to access sth. defined in a different scope (like global variable, class member, namespace member, etc.)
    
    std :: cout << "Hello World" << std::endl; // using :: to access cout and endl from std namespace
    std :: cin >> a; // using :: to access cin from std namespace

    // SUBSCRIPT OPERATOR ( [] ) --> used to access elements of an array or a string

    int arr[5] = {1, 2, 3, 4, 5};
    cout << arr[0] << endl; // will print 1

    // FUNCTION CALL OPERATOR ( () ) --> used to call a function
    // function_name(arguments)

    return 0;
}