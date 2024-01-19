#include <stdio.h>
#include "fib.h"

int fibcalc(int n) {
    if (n <= 1) {
        return n;
    }
    int fib = 1;
    int prevFib = 1;
    for (int i = 2; i < n; i++) {
        int temp = fib;
        fib += 2 * prevFib;
        prevFib = temp;
    }
    return fib;
}