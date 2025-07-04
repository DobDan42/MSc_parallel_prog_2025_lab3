#include <iostream>
#include <omp.h>
#include <stdlib.h>


int main(int argc, char **argv) {
  int sRowSize = 10*1024;
  int nbRows = 1024;
  char * p = new char[sRowSize*nbRows];
  double t1 = omp_get_wtime();
/*for (long x=0; x<sRowSize; x++)
    for (long y=0; y<nbRows; y++) //For this, strided runnable. (run with valgrind. 72% cache miss rate.)
     */  
  for (long y=0; y<nbRows; y++) // strided_switched runnable. 5% cache miss rate.
    for (long x=0; x<sRowSize; x++)
    {
      p[x+y*sRowSize]++;
    }
  double t2 = omp_get_wtime();
  std::cout << "Total time " << t2-t1 << std::endl;
  delete[] p;
  return 0;
}
