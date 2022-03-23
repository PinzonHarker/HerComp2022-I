
#include <iostream>
#include <cmath>

int main(int argc, char **argv)
{
    std::cout.precision(8);
     std::cout.setf(std::ios::scientific);
    float a = 1.0, b=1.0, c=10.0f;

    for(int n=1; n < 10; n++){
        float c = pow(10.0, -n);

        float x1 = (-b + std::sqrt(b*b - 4.0*a*c))/(2.0*a);
        float x2 = (-b - std::sqrt(b*b - 4.0*a*c))/(2.0*a);
        float x1_p = (-2.0*c)/(b + std::sqrt(b*b - 4.0*a*c));
        float x2_p = (-2.0*c)/(b - std::sqrt(b*b - 4.0*a*c));
        std::cout << c << "\t" << x1 << "\t" << x2 << "\t" << x1_p << "\t" << x2_p
                  << "\n";

        // c = pow(c, -n);
    }
    return 0;
}
