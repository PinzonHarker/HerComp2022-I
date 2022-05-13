#include <iostream>
#include <chrono>
#include <Eigen/Dense>
#include <Eigen/Core>
#include <vector>
#include <numeric>
#include <algorithm>

double multiply(int size);

int main(int argc, char ** argv)
{
  const int Ms = atoi(argv[1]); // Matrix size
  const int S = atoi(argv[2]); // seed
  const int Num = atoi(argv[3]); // número de repeticiones

  std::vector<double> data;
  for(int i = 0;i<Num;i++)
  {
    srand(S+i); // new seed
    data.push_back(multiply(Ms)); // Acumulacion de datos de tiempo
  }

  // Calculo del promedio
  double mean = std::accumulate(data.begin(), data.end(), 0.0)/data.size();

  //Calculo de la desviacion estandar
  std::vector<double> diff(data.size());
  std::transform(data.begin(), data.end(), diff.begin(), [mean](double x) { return x - mean; });
  double sq_sum = std::inner_product(diff.begin(), diff.end(), diff.begin(), 0.0);
  double stdev = std::sqrt(sq_sum / data.size());

  // Impresion de resultados
  std::cout << mean << "\t" << stdev << std::endl;
}


double multiply(int size)
{
  // create matrices
  Eigen::MatrixXd A = Eigen::MatrixXd::Random(size, size);
  Eigen::MatrixXd B = Eigen::MatrixXd::Random(size, size);
  
  Eigen::initParallel(); // Se activan los threads para Eigen

  auto start = std::chrono::steady_clock::now();
  auto C{A*B}; // MULTIPLY
  double tmp = C(0, 0); // use the matrix to make eigen compute it
  auto end = std::chrono::steady_clock::now();
  
  std::clog << tmp << std::endl; // use the matrix to make eigen compute it

  std::chrono::duration<double> elapsed_seconds = end-start;
  return elapsed_seconds.count();
}