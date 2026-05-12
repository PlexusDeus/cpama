/* Closest date */

#include <stdio.h>

int main(void) {
  int d1, d2, m1, m2, y1, y2;

  printf("Enter first date (dd/mm/yy): ");
  scanf("%d/%d/%d", &d1, &m1, &y1);
  printf("Enter second date (dd/mm/yy): ");
  scanf("%d/%d/%d", &d2, &m2, &y2);

  if ((y1 < y2) || (y1 == y2 && m1 < m2) || (y1 == y2 && m1 == m2 && d1 < d2))
    printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", d1, m1, y1, d2, m2, y2);
  else
    printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", d2, m2, y2, d1, m1, y1);
}