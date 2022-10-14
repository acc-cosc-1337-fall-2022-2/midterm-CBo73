#include "question2.h"
#include <iostream>

using std::cout;
using std::cin;
using std::string;

int main()
{
    int num;
    string fibnum;
    int again;

    do
    {
        cout << "\nPlease enter a number 1-15, for fibonacci string equivalent: ";
        cin >> num;
        if(num > 0 && num < 16)
        {
            fibnum = get_fib_sequence(num);
            cout <<"\n"<<"Fibonacci string equivalent is: "<< fibnum << "\n";
        }
        else
        {
            cout << "Number is not a value of 1-15\n";
        }
        cout << "Would you like to run program again? Type 0 to continue or 1 to exit ";
        cin >> again;

    }
    while(again == 0);

    cout << "Take Care!\n";

    return 0;
}