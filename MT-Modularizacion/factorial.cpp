# include "factorial.h"

long double factorial(long int m)
{
    if (m <= 1)
        return 1;
    return m * factorial(m - 1);
}