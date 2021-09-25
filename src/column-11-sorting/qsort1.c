#include "../utils.c"

void qsort1(int *start, int *end) {
  if (start >= end) return;

  int *m = start;
  for (int *i = start + 1; i <= end; i++) {
    if (*i < *start) swap_int(++m, i);
  }

  swap_int(start, m);
  qsort1(start, m - 1);
  qsort1(m + 1, end);
}