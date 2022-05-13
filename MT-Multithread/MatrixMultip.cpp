#include <iostream>
#include <chrono>
#include <vector>
#include <numeric>
#include <algorithm>
#include <Eigen/Dense>

double multiply(int size);

int main(int argc, char const *argv[])
{
      const int M = atoi(argv[1]); // Matrix size
      const int S = atoi(argv[2]); // seed
	const int N = atoi(argv[3]); // N of Repetitions

	std::vector<double> data;
	for (int i = 0; i < N; ++i )
	{
            srand(S + i); // new seed
		data.push_back(multiply(M));
	}

	double mean = std::accumulate(data.begin(), data.end(), 0.0) / data.size();
	double sq_sum = std::inner_product(data.begin(), data.end(), data.begin(), 0.0);
	double stdev = std::sqrt(sq_sum / data.size() - mean * mean);

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

  // std::clog << tmp << std::endl; // use the matrix to make eigen compute it

  std::chrono::duration<double> elapsed_seconds = end-start;
  return elapsed_seconds.count();
}
