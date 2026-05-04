/* Telephone number form */

#include <stdio.h>

int main(void) {
  int prefix, root, suffix;

  printf("Enter phone number [(xxx) xxx-xxxx]: ");
  scanf("(%d) %d-%d", &prefix, &root, &suffix);

  printf("You entered %d.%d.%d\n", prefix, root, suffix);
}