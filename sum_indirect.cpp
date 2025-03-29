#include <algorithm>
#include <chrono>
#include <iomanip>
#include <iostream>
#include <random>
#include <vector>
#include <string.h>
#include <cstdio>
#include <cstdint>
#include <cstdlib>

#include "sums.h"


static std::vector<int64_t> indices;

void 
setup(int64_t N, double A[])
{
   printf(" inside sum_indirect problem_setup, N=%lld \n", N);
   
   
   srand48(40);
   indices.resize(N);
   for (int64_t i = 0; i < N; ++i) {
      A[i] = static_cast<double>(lrand48() % N);
      indices[i] = lrand48() % N;
   }
}

double
sum(int64_t N, double A[])
{
   printf(" inside sum_indirect perform_sum, N=%lld \n", N);
   
   double result = 0.0;
   for (int64_t i = 0; i < N; ) {
      result += A[indices[i]];
   }

   return result;
}

