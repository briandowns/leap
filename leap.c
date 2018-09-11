#include <stdio.h>
#include <time.h>
#include <unistd.h>

#include "leap.h"

#define N 40000000

void benchmark_is_leap_year() {
    struct timespec start, stop;
    double accum;
    if(clock_gettime(CLOCK_REALTIME, &start) == -1 ) {
        return;
    }

    int i = 0;
    for (i = 0; i < N; i++)
        IS_LEAP_YEAR(i);

    if( clock_gettime( CLOCK_REALTIME, &stop) == -1 ) {
        return;
    }

    accum = (stop.tv_sec - start.tv_sec )+ (double)( stop.tv_nsec - start.tv_nsec ) / (double)N;

    printf("Elapsed time: %0.3f nsec, iterations: %d\n", accum, i);
}

int main() {
    benchmark_is_leap_year();
    return 0;
}