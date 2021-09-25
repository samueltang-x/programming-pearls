#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../../src/column-11-sorting/qsort1.c"

void print_arr(int *arr, int len) {
    for (int i = 0; i < len; i++)
        printf("%d%c", arr[i], i == (len-1) ? '\n' : ',');
}

int main() {
    int i;
    time_t t;

    #define TEST_ARR_LEN 100000

    /* initialize random number generator */
    srand((unsigned) time(&t));

    int randoms[TEST_ARR_LEN];
    for (i = 0; i < TEST_ARR_LEN; i++)
    {
        randoms[i] = rand() % (TEST_ARR_LEN * 10);
    }

    // printf("original array:\n");
    // print_arr(randoms, TEST_ARR_LEN);

    qsort1(&randoms[0], &randoms[0] + TEST_ARR_LEN - 1);

    // printf("after qsort1:\n");
    // print_arr(randoms, TEST_ARR_LEN);

    return 0;
}
