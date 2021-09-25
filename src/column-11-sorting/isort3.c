void isort3(int *arr, int len) {
  int i, j, t;
  for (i = 1; i < len; i++) {
    t = arr[i];
    for (j = i; j > 0 && arr[j - 1] > t; j--) {
      arr[j] = arr[j - 1];
    }
    arr[j] = t;
  }
}