// main
#include "vector_ops.hpp"

#include <iostream>
#include <numeric>

int main(int argc, char **argv)
{
    const int N = std::atoi(argv[1]);
    std::cout << mean(vectori(N)) << "\n";
}