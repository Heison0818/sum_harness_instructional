#include <algorithm>
#include <chrono>
#include <iomanip>
#include <iostream>
#include <random>
#include <vector>
#include <string.h>
#include <cstdio>
#include <cstdint>

#include "sums.h"

void 
setup(int64_t N, double A[])
{
   printf(" inside direct_sum problem_setup, N=%lld \n", N);
   printf("\n");
   for (int64_t i = 0; i < N; ++i) {
      A[i] = static_cast<double>(i);
   }
}

double
sum(int64_t N, double A[])
{
   printf(" inside direct_sum perform_sum, N=%lld \n", N);
   printf("\n");
   double result = 0.0;
   for (int64_t i = 0; i < N; ++i) {
      result += A[i];
   }

   return result;
}

