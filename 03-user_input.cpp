// USER-INPUT
#include <iostream>
using namespace std;
int main()
{
    int a, b;

    cout << "enter first number : ";
    cin >> a; // cin is used to take input from the user 

    cout << "enter second number : ";
    cin >> b;

    int sum = a + b;
    cout << "sum of " << a << " & " << b << " is : " << sum << endl;

    int height, weight;
    
    cout << "enter your height & weight : ";
    cin >> height >> weight; // can take multiple inputs like this

    cout << "your height is " << height << " ft" << endl
         << "your weight is " << weight << " kg";

    return 0;
}