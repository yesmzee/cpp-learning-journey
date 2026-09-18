// LOOPS IN CPP
#include <iostream>
using namespace std;
int main()
{
    // there are different types of loops in cpp :

    // 1. FOR LOOP --> used to execute a block of code for a specific number of times

    for (int i = 0; i < 5; i++)
    {
        cout << "hello world" << endl;
    }

    // 2. WHILE LOOP --> used to execute a block of code while a condition is true

    int j = 0;
    while (j < 5)
    {
        cout << "hello world" << endl;
        j++;
    }

    // 3. DO-WHILE LOOP --> used to execute a block of code at least once and then continue executing it while a condition is true

    int k = 0;
    do
    {
        cout << "hello world" << endl;
        k++;
    } while (k < 5);

    return 0;
}