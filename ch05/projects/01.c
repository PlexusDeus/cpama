/* Calculates the number of digits (max 4) */

#include <stdio.h>

int main(void) {
  int n, d;

  printf("Enter a number: ");
  scanf("%d", &n);

  if (0 <= n && n <= 9)
    d = 1;
  else if (10 <= n && n <= 99)
    d = 2;
  else if (100 <= n && n <= 999)
    d = 3;
  else if (1000 <= n && n <= 9999)
    d = 4;

  printf("The number %d has %d digits\n", n, d);
}