#include <stdio.h>

void swap(int *x, int *y);

int main(void) {
  int a = 3, b = 7;

  printf("Before: %d %d\n", a, b);
  /**< Sender værdierne a og b med til function swap ved hjælp af addresse operatorerne */
  swap(&a, &b);
  printf("After:  %d %d\n", a, b);

  return 0;
}

/**< Swap bruger tmp til at bytte de 2 tal om */
void swap(int *x, int *y) {
  int tmp;
  tmp = *x;
  *x = *y;
  *y = tmp;
}
