#include <random>
#include <iostream>
#include <cstdlib>
#include <vector>

void compute_pdf(int seed, int nsamples, double mu, double sigma, double xmin, double xmax, int nbins);

int main(int argc, char **argv)
{
  const int SEED = std::atof(argv[1]);
  const int NSAMPLES = std::atof(argv[2]);
  const double MU = std::atof(argv[3]);
  const double SIGMA = std::atof(argv[4]);
  const double XMIN = std::atof(argv[5]);
  const double XMAX = std::atof(argv[6]);
  const int NBINS = std::atof(argv[7]);

  compute_pdf(SEED, NSAMPLES, MU, SIGMA, XMIN, XMAX, NBINS);

  return EXIT_SUCCESS;
}

void compute_pdf(int seed, int nsamples, double mu, double sigma, double xmin, double xmax, int nbins)
{
  //number precision
  std::cout.precision(5);
  //std::cout.setf(std::ios::scientific);
  // random stuff
  std::mt19937 gen(seed);
  std::normal_distribution<double> dis{mu, sigma};
  // TODO: histogram stuff
  int hist[nbins] = { 0 };
  double step = (xmax - xmin)/nbins;

  for(int n = 0; n < nsamples; ++n) {
    double r = dis(gen);
    // TODO: fill here the counting histogram
    for(int i = 0; i < nbins + 1; ++i){
      double p = i + 1.0;
      // std::cout << (step*p) + xmin << "\n";
      if(r <= (step*p) + xmin && r > (step*(p-1.0)) + xmin){
        hist[i] ++;
        break;
      }
    }
  }
  // TODO: compute and print the pdf
  double pdf = 0;
  for(int j = 0; j < nbins; ++j){
    pdf += hist[j];
    double pseudonormalized = hist[j]*1.0/nsamples;
    std::cout << (step*j) + xmin << "\t" << pseudonormalized << "\t" << pdf << "\n";
    };

  // showing constants if their were wrong
  // std::cout << "\n" << seed << ", " << nsamples << ", " << xmin << ", " << xmax << ", " << nbins;

}
