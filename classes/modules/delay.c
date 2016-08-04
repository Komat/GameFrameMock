/**
 * @description
 * @fileName delay.c.
 * @author komatsu
 * @date 8/4/16.
 * @version 0.0
 */

#include "delay.h"


int delay(unsigned long x) {

    clock_t c1 = clock(), c2;

    do {
        if ((c2 = clock()) == (clock_t) -1)
            return 0;
    } while (1000.0 * (c2 - c1) / CLOCKS_PER_SEC < x);

    return 1;
}

