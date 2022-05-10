# include "factorial.h"
# include <iostream>
# include <cstdlib>

// funcion main: archivo factorial_main.cpp
int main(int argc, char *argv[])
{
    const int n = std::atoi(argv[1]);
    if( n < 0 )
        return 0;
    std::cout << factorial(n) << "\n";
    return 0;
}