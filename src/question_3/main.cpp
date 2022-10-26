#include <iostream>
#include "question3.h"

using std::cin;
using std::cout;

int main()
{
    double c;
    double to_fahren;
    int again;

    do
    {
        cout << "\nPlease enter a degree in Celsius to convert to Fahrenheit : ";
        cin >> c;
      
        to_fahren = get_fahrenheit(c);
        cout <<"\n"<<"This is equal to: "<< to_fahren << " degrees Fahrenheit\n";
      
        cout << "Would you like to run program again? Type 0 to continue or 1 to exit ";
        cin >> again;

    }
    while(again == 0);

    cout << "Take Care!\n";

    return 0;
}