#include <random>
#include <iostream>

int main(int argc, char **argv)
{
    int p = std::atoi(argv[1]);
    double pp = 3.0/p;
    int list[p] = { 0 };

    std::random_device rd; // inicializacion con semilla aleatoria
    std::mt19937 gen(rd()); // genera bits aleatorios
    std::normal_distribution<> dis{1.5, 0.3}; // distribucion

    for(int n = 0; n < 10; ++n) {
      for(int i = 1; i < p; i++){
        if((i-1)*p < dis(gen) < i*p){
          list[i]++;
        }
      }
    }

    for (int i = p - 1; i >= 0; i--) 
        std::cout << list[i]<< ",";
    
    

}
