/* Computes the volume of a sphere with a 10-meter radius */

#include <stdio.h>

#define PI 3.1415f

int main(void) {
  float r, volume;
  
  r = 10.0f;
  volume = (4.0f / 3.0f) * PI * r * r * r;

  printf("Volume of a Sphere of 10 meters radius: \n");
  printf("%.2f cubic meters.\n", volume);
}