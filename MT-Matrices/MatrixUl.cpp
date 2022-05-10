#include <iostream>
#include <chrono>
#include <Eigen/Dense>
#include <vector>
#include <numeric>
#include <algorithm>

double solvesystem(int size);

int main(int argc, char **argv)
{
	const int M = atoi(argv[1]); // Matrix size
	const int S = atoi(argv[2]); // seed
	const int N = atoi(argv[3]); // N of Repetitions

	std::vector<double> data;
	for (int i = 0; i < N; i++)
	{
		srand(S + i); // new seed
		data.push_back(solvesystem(M));
	}

	double mean = std::accumulate(data.begin(), data.end(), 0.0) / data.size();
	double sq_sum = std::inner_product(data.begin(), data.end(), data.begin(), 0.0);
	double stdev = std::sqrt(sq_sum / data.size() - mean * mean);

	std::cout << mean << "\t" << stdev << std::endl;
}

double solvesystem(int size)
{
	Eigen::MatrixXd A = Eigen::MatrixXd::Random(size, size);
	Eigen::MatrixXd b = Eigen::MatrixXd::Random(size, 1);

	auto start = std::chrono::steady_clock::now();
	Eigen::MatrixXd x = A.fullPivLu().solve(b);
	auto end = std::chrono::steady_clock::now();

	std::chrono::duration<double> elapsed_seconds = end - start;
	return elapsed_seconds.count();
}
