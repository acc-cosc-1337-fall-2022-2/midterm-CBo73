#include <iostream>
#include "question4.h"

using std::cout;
using std::cin;

int main()
{
    int seconds_since_1970;

    cout << "Please enter elapsed time in seconds: \n";
    cin >> seconds_since_1970;

    cout <<"Hours: " << get_hours(seconds_since_1970);
    cout <<"\nMinutes: " << get_minutes(seconds_since_1970);
    cout <<"\nSeconds: " << get_seconds(seconds_since_1970)<< "\n";


    

	return 0;
}