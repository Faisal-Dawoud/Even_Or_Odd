#include <iostream>
using namespace std;

int main()
{
    cout << "======================\n";
    cout << "==== Even or odd =====\n";
    cout << "======================\n";
 int number;
 cout << "please enter a number: ";
 cin >> number;

 if ( number % 2 == 1)
 {
    cout << number << " is an odd number";
 } else 
    cout << number << " is an even number"; 


return 0;
}