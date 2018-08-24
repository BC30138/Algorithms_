#include"algorithms.h"

int _algorithms::gcd (int a, int b)
{
    if (b == 0)
        return a;
    else 
        gcd(b, a % b);
}