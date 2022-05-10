#include <iostream>

int main(int argc, char **argv)
{
  //double x[10], y[5]; // LA: imprime raro
  double y[5], x[10]; // LB: imprime 1

  for(int ii = 0; ii < 5; ++ii) {
    y[ii] = ii +1;
  }
  for(int ii = 0; ii < 10; ++ii) {
    x[ii] = -(ii +1);
  }

  // -X-X-X-X CLARAMENTE EL ERROR ES OVERRIDING SOBREPASARSE EL TAMAÑO DEL ARRAY -X-X-X-X-
  double z = x[9];
  std::cout << z << std::endl;

  return 0;
}
