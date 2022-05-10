//Implementation
#include <iostream>
#include <numeric>
#include <vector>

#include "vector_ops.hpp"

std::vector<double> vectori(const int N)
{
    std::vector<double> x;
    x.resize(N);
    std::iota(x.begin(), x.end(), 1.0);
    return x;
}