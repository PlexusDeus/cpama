/* Computes the volume of a sphere with a user defined radius */

#include <stdio.h>

#define PI 3.1415f

int main(void) {
  float r, volume;
  
  printf("Enter the radius of the sphere (in meters): ");
  scanf("%f", &r);
  volume = (4.0f / 3.0f) * PI * r * r * r;

  printf("The volume of the sphere of is: ");
  printf("%.2f cubic meters.\n", volume);
}