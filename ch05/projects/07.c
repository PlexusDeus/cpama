/* Largest and smallest of four integers */

#include <stdio.h>

int main(void) {
  int n1, n2, n3, n4, s1, s2, l1, l2;

  printf("Enter four integers: ");
  scanf("%d%d%d%d", &n1, &n2, &n3, &n4);

  if (n1 < n2) {
    s1 = n1;
    l1 = n2;
  } else {
    s1 = n2;
    l1 = n1;
  }

  if (n3 < n4) {
    s2 = n3;
    l2 = n4;
  } else {
    s2 = n4;
    l2 = n3;
  }

  printf("Largest: %d\n", l1 > l2 ? l1 : l2);
  printf("Smallest: %d\n", s1 < s2 ? s1 : s2);
}