#include <stdio.h>
#define PI 3.14159

float get_surface(float radius){
  float sur;
  sur = 4.0 * PI * radius * radius;
  return sur;
}

float get_volume(float radius){
  float vol;
  vol = (4.0 / 3.0 ) * PI * radius * radius * radius;
  return vol;
}

