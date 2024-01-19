#include <stdio.h>
#include "print_fib.h"
#include "fib.h"

void print_fib() {
    int length;
    printf("Length? ");
    scanf("%d", &length);
    printf("[");
    int check = length - 1;
    for (int i = 0; i < length; i++) {
        if (i == check) {
            printf("%d", fibcalc(i));
        } else {
            printf("%d, ", fibcalc(i));
        }
    }
    printf("]");
}