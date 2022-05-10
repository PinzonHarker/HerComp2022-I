//Implementation
#include <numeric>

#include "vector_ops.hpp"
double mean(const std::vector<double> & data)
{
    if( data.size() == 0)
        return 0.0;
    return std::accumulate(data.begin(), data.end(), 0.0)/data.size();
}