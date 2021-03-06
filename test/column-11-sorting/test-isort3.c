#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../../src/column-11-sorting/isort3.c"

// void print_arr(int *arr, int len) {
//     for (int i = 0; i < len; i++)
//         printf("%d%c", arr[i], i == (len-1) ? '\n' : ',');
// }

int main() {
    int i;
    time_t t;

    #define TEST_ARR_LEN 10000

    /* initialize random number generator */
    srand((unsigned) time(&t));

    int randoms[TEST_ARR_LEN];
    for (i = 0; i < TEST_ARR_LEN; i++)
    {
      randoms[i] = rand() % (TEST_ARR_LEN * 10);
    }

    // printf("original array:\n");
    // print_arr(randoms, TEST_ARR_LEN);

    isort3(randoms, TEST_ARR_LEN);

    // printf("after sort:\n");
    // print_arr(randoms, TEST_ARR_LEN);

    return 0;
}
