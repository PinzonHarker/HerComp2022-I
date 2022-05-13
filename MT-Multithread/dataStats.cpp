#include <iostream>
#include <fstream>
#include <vector>

// double S(double n);
int N = 3;
int n(int x, int a);
std::vector<double> T;

int main(void)
{
    double valor;

    std::ifstream data("data.dat");
    if (!data.is_open())
    {
        std::cout << "Error al abrir data.dat\n";
        exit(EXIT_FAILURE);
    }

    while (data >> valor)
    {
        T.push_back(valor);
    }

    double S;
    double E;
    for (int ii = 0; ii < T.size()/N; ii++)
    {
        S = T[n(0, 1)] / T[n(ii, 1)];
        E = S/T[n(ii, 0)];
        std::cout << T[n(ii, 0)] << "\t" << S << "\t" << E << std::endl;
    }
    
    
    // Close the file
    data.close();
    return 0;
}

// // Procesamiento de S(n) y E(n)
// double S(double n){

// }

int n(int x, int a)
{
    return x * N + a;
}