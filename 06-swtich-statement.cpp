// SWITCH STATEMENT
#include <iostream>
using namespace std;

int main()
{
    int age;

    cout << "enter your age :";
    cin >> age;

    switch (age > 18 && age < 25)
    {
    case true: // can add multiple cases like case 1: case 2: case 3: etc.
        cout << "adult\nyou can vote";
        break;
    default: // executes when none of the cases are true
        cout << "meri jaan you're under 18 \nyou can not vote";
        break;
    }
    return 0;
}