// simple program to find Riemann sums
// bad coding style
// need to clean up
// Copyright Andrew Tolan 2016

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main (void)
{
  // main variables
  float yValue;
  float rectValue1 = 0; //for left hand limit
  float rectValue2 = 0; //for right hand limit
  float i;
  
  // changeable variables
  float start = 1; //change to current
  float end = 2; //change to current
  float increment = 0.2; //change to current

  // left hand limit
  float leftLimit()
  {
    for (i = start; i < end; i += increment) 
    {
      yValue = 7 / i; // change to current equation
  
      rectValue1 += yValue * increment;
    }
  
    printf("Left hand limit: %f\n", rectValue1);
  }
  
  // right hand limit
  float rightLimit()
  {
    for (i = end; i >= start; i -= increment) // must be opposite of left hand limit
    {
      yValue = 7 / i; //change to current equation
      
      rectValue2 += yValue * increment;
    }
    
    printf("Right hand limit: %f\n", rectValue2);
  }
  
  leftLimit();
  rightLimit();

  return 0;
}
