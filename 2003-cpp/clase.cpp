#include <iostream>
#include <cmath>

int main(int argc, char const *argv[])
{
    float sumd = 0.0, sumu = 0.0;

    std::cout.precision(4);
    std::cout.setf(std::ios::scientific);

    int N = std::atoi(argv[1]);

    for(int n = 1; n <= N; n++){
        sumu += 1.0/n;
    }
    for(int n = N; n > 0; n--){
        sumd += 1.0/n;
    }
    float diff = std::fabs(sumu - sumd);
    std::cout << "sum up ---- sum down ---- diff\n";
    std::cout << sumu << "\t" << sumd << "\t" << diff;
    return 0;
}
