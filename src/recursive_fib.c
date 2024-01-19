#include <stdio.h>
#include "fib.h"

int fibcalc(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    }
    return fibcalc(n - 1) + 2 * fibcalc(n - 2);
}