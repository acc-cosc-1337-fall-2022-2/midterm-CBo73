#include "question1.h"

bool test_config()
{
    return true;
}

int get_fib_sequence(int num)
{
    int term1 = 0;
    int term2 = 1;
    int nextTerm = 0;
    for (int i = 1; i < num; i++)
    {
        nextTerm = term1 + term2;
        term1 = term2;
        term2 = nextTerm;
    }
    return nextTerm;


}