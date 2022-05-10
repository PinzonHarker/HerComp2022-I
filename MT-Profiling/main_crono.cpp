#include <cstdio>
#include <cstdlib>
#include <chrono>
#include <iostream>
#include "funcion1.h"
#include "funcion2.h"
#include "funcion3.h"
/*                                                                                                  
   Tests cache misses.                                                                              
*/

void print_elapsed(auto start, auto end );

int main(int argc, char **argv)
{
  if (argc < 3){
    printf("Usage: cacheTest sizeI sizeJ\nIn first input.\n");
    return 1;
  }
  long sI = atoi(argv[1]);
  long sJ = atoi(argv[2]);

  auto start = std::chrono::steady_clock::now();

  std::cout << sI;

  long *arr = new long[sI*sJ]; // double array.                                                     
  auto end = std::chrono::steady_clock::now();
  print_elapsed(start, end);

  // option 1                                                                                       
  start = std::chrono::steady_clock::now();
  funcion1(arr, sI, sJ);
  end = std::chrono::steady_clock::now();
  print_elapsed(start, end);

  // option 2                                                                                       
  start = std::chrono::steady_clock::now();
  funcion2(arr, sI, sJ);
  end = std::chrono::steady_clock::now();
  print_elapsed(start, end);

  // option 3                                                                                       
  start = std::chrono::steady_clock::now();
  funcion3(arr, sI, sJ);
  end = std::chrono::steady_clock::now();
  print_elapsed(start, end);

  std::cout << "\n";

  return 0;
}


void print_elapsed(auto start, auto end )
{
  std::cout << std::chrono::duration_cast<std::chrono::milliseconds>(end-start).count()
            << "\t";
}
