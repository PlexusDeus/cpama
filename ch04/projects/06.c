/* Computes a European Article Number check digit */

#include <stdio.h>

int main(void) {
  int i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, i12, s1, s2, s3;

  printf("Enter the first 12 digits of a EAN: ");
  scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5, &i6, &i7, &i8, &i9, &i10, &i11, &i12);

  s1 = i2 + i4 + i6 + i8 + i10 + i12;
  s2 = i1 + i3 + i5 + i7 + i9 + i11;
  s3 = 3 * s1 + s2;

  printf("Check digit: %d\n", 9 - ((s3 - 1) % 10));
}
