#include "funcion2.h"


void funcion2(long *arr, long sI, long sJ ){
   for (long i=0; i < sI; ++i)
    for (long j=0; j < sJ; ++j)
      arr[(i * (sI)) + j ] = i;
}

