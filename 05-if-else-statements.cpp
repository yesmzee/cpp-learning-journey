// CONDITIONAL IF-ELSE STATEMENTS
#include <iostream>
using namespace std;

int main()
{
    // IF-STATEMENT

    int age;
    cout << "enter your age : ";
    cin >> age;
    if (age >= 18)
    {
        cout << "you are an adult" << endl;
    }

    // IF-ELSE

    int myAge;
    cout << "enter your age : ";
    cin >> myAge;
    if (myAge >= 18)
    {
        cout << "you are an adult";
    }
    else
    {
        cout << "your are a minor betaa" << endl;
    }

    // IF-ELSE-IF (number guessing)

    int number = 492;
    int guessNumber;
    cout << "guess the number : ";
    cin >> guessNumber;
    if (guessNumber == number)
    {
        cout<<"congrats ! you've found the number";
    }
    else if (guessNumber < 100)
    {
        cout<<"nahh too low";
    }
    else if (guessNumber < 200 )
    {
        cout<<"still low";
    }
    else if (guessNumber < 300)
    {
        cout<<"still low";
    }
    else if ( guessNumber < 400)
    {
        cout<<"still low";
    }
    else if (guessNumber < 500)
    {
        cout<<"you are very close";
    }
    else
    {
        cout<<"nahh too high";
    }
    
    


    return 0;
}