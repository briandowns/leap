#ifndef _LEAP_H
#define _LEAP_H

#define IS_LEAP_YEAR(x) ((x % 4 == 0 && x % 100 != 0) || x % 400 == 0) ? 1 : 0

#define IS_LEAP_YEAR_PRINT(x) ((x % 4 == 0 && x % 100 != 0) || x % 400 == 0) \
    ? printf("%d - %d\n", x, 1) \
    : printf("%d - %d\n", x, 0)

#endif 
