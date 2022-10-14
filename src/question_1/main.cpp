#include<iostream>
#include "question1.h"

using std::cout;
using std::cin;

int main()
{
    int num;
    int fibnum;
    int again;

    do
    {
        cout << "\nPlease enter a number 1-15, for fibonacci equivalent: ";
        cin >> num;
        if(num > 0 && num < 16)
        {
            fibnum = get_fib_sequence(num);
            cout <<"\n"<<"Fibonacci equivalent is: "<< fibnum << "\n";
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