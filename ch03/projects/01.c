/* Date form */

#include <stdio.h>

int main(void) {
  int day, month, year;

  printf("Enter a date (mm/dd/yy) :");
  scanf("%d/%d/%d", &month, &day, &year);
  printf("You entered the date %d%.2d%.2d\n", year, month, day);
}