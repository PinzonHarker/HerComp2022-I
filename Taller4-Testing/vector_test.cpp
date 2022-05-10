#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() - only do this in one cpp file
#include "catch2/catch.hpp"
#include "vector_ops.hpp"

#include <vector>

double e = 1.0e-3;
std::vector<double> filled_a = {5.0, 5.0, 5.0, 5.0, 5.0, 5.0};
std::vector<double> b = {6.0, 5.0, 4.0, 0.5, 5.5, 10.8};
std::vector<double> c = {1.0, 0.0, 1.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0}; // N = 15 n_1 = 9

TEST_CASE("Mean of a vector is computed", "[mean]")
{
    REQUIRE((mean(vectori(0.0)) - 0.0) < e);
    REQUIRE((mean(filled_a) - 5.0) < e);
    REQUIRE((mean(vectori(100)) - 50.5) < e);
    REQUIRE((mean(b) - 5.3) < e);
    REQUIRE((mean(c) - 0.6) < e);
}