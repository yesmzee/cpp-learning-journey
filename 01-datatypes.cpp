// DATA-TYPES in CPP

#include <iostream>
using namespace std;
int main()
{
    // INTEGER DATA TYPES

    int age = 20;                   // int data type
    short int shortAge = 20;        // shorter size than int (typically 2 bytes) range: -32,768 to 32,767
    long int longAge = 20;          // longer size than int (typically 4 bytes) range: -2,147,483,648 to 2,147,483,647
    long long int longLongAge = 20; // longer size than long int (typically 8 bytes) range: -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807

    // signed int
    int temperature = -10; // signed int --> stores both positive and negative values
    // unsigned int
    unsigned int positiveTemperature = 10; // unsigned int --> stores only positive values

    // FLOATING-POINT DATA TYPES

    float height = 5.9;   // float --> for 6-7 digit precision (size: 4 bytes)
    double weight = 70.5; // double --> for 15-16 digit precision (size: 8 bytes)
    long double distance = 123456789.123456789; // long double --> for 18-19 digit precision (size: 12 bytes)

    // CHARACTER DATA TYPE
    char grade = 'A'; // character data type
    // char have numeric values as well, for example: 'A' = 65, 'B' = 66, 'C' = 67, etc.
    char letter = 65; // 'A' has a numeric value of 65

    // BOOLEAN DATA TYPE
    bool isStudent = true; // boolean data type

    // STRING DATA TYPE
    string name = "Zeeshan"; // string data type
}
