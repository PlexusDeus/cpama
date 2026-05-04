/* Evaluates a polynomial applying Horner's Rule */

#include <stdio.h>

int main(void) {
  int x, p;

  printf("Enter value of x: ");
  scanf("%d", &x);
  p = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;
  printf("Result: %d\n", p);
}