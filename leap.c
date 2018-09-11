#include <stdio.h>
#include <time.h>

#include "leap.h"

void benchmark_is_leap_year() {
    float startTime = (float)clock() / CLOCKS_PER_SEC;

    int N = 1000000000;
    int i = 0;
    for (i = 0; i < N; i++)
        IS_LEAP_YEAR(i);

    float endTime = (float)clock() / CLOCKS_PER_SEC;

    float timeElapsed = endTime - startTime;

    printf("Elapsed time: %0.3f sec, iterations: %d\n", timeElapsed, i);
}

int main() {
    benchmark_is_leap_year();
    return 0;
}