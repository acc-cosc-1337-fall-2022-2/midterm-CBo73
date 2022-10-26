#include "question2.h"
#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::to_string;


bool test_config()
{
    return true;
}

string get_fib_sequence(int num)
{
    string final_str;
    int term1 = 0;
    int term2 = 1;
    int nextTerm = 0;
   

    for (int i = 0; i <= num; i++)
    {
        if(i == 0)
        {
            final_str = "0";
            continue;
        }

        if(i == 2)
        {
            final_str = final_str + " 1";
            continue;
        }

        nextTerm = term1 + term2;
        term1 = term2;
        term2 = nextTerm;
        final_str += " " + to_string(nextTerm);
    }
    return final_str;
}