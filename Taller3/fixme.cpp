#include <iostream>
#include <cstdlib>
#include <cmath>

int foo(int a, int b);
int bar(int a, int b);
double baz(double x);

int main(void)
{
    int ii, jj;
    ii = 0;
    jj = -1;
    foo(ii, jj);
    foo(jj, ii);
    baz(25.9);

    return EXIT_SUCCESS;
}

// Operates two integers in some way. Uses bar function.
int foo(int a, int b)
{
    if(a == 0 || b == 0){
        return 0;
    }
    return a / b + b / bar(a, b) + b / a;
}

// Operates two numbers in some way.
int bar(int a, int b)
{
    int c = abs(a); //unsigned: refers to only positive number with arrange by 0 to 2^32. Not always a good idea
    return c + a - b;
}

//returns 0 if x=0 or a result `value`.
double baz(double x)
{
    if (x == 0)
        return 0;
    double v = 1 - (x + 1);
    if(v < 0)
        return 0;
    return std::sqrt(v);
}
