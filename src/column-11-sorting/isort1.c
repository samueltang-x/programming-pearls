void swap_int(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

void isort1(int *arr, int len) {
    int i, j;
    for (i = 1; i < len; i++) {
        for (j = i; j > 0 && arr[j-1] > arr[j]; j--) {
            swap_int(arr + j, arr + j - 1);
        }
    }
}