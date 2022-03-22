#include <iostream>
#include <cmath>

float num(int n);
float f1(int n);
float f2(int n);
using namespace std;


int main(int argc, char **argv) {
    cout.precision(7);
    cout.setf(std::ios::scientific);
    int N = std::atoi(argv[1]);

    cout << f2(N) << endl;
    return 0;
}


float f1(int n)
{
  // escribir aca la implementacion de la forma	original de la suma hasta n terminos
  float res = 0;
  for (int i = 0; i < n; i++)
  {
    res += pow(-1, i) / (2*i + 1);
  }
  return res;
}

float f2(int n)
{
  // escribir aca la implementacion de la segunda forma de la suma hasta n terminos totales
  float res, sum, r = 0;
  bool con = true;
  for (int i = 0; i < n; i++)
  {
      r = pow(2*i + 1,-1);
      if (con)
      {
          sum += r;
          con = false;
      } else {
          res += r;
          con = true;
      }
  }
  return sum-res;
}

float f3(int n)
{
  // escribir aca la implementacion de la tercera forma de la suma hasta n terminos totales
  float res = 0;
  for(int i=0; i < n; i++){
    res = (2.0/((4.0*i+1)*(4.0*i+3)));
  }
  return res;
}
