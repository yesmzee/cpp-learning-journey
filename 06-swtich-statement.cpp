// SWITCH STATMENT
#include <iostream>
using namespace std;

int main()
{
    int age;

    cout << "enter your age :";
    cin >> age;

    switch (age > 18 && age < 25)
    {
    case true:
        cout << "adult\nyou can vote";
        break;
    default:
        cout << "meri jaan you're under 18 \nyou can not vote";
        break;
    }
    return 0;
}