// simple program to find Riemann sums
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main (void)
{
  float yValue;
  float rectValue = 0;
  float i;

  // for upper limit
  float upperLimit()
  {
    for (i = 1; i < 2; i += 0.2)
    {
      yValue = 7 / i;
  
      rectValue += yValue * 0.2;
    }
  
    printf("%f", rectValue);
  }
  
  // for lower limit
  float lowerLimit()
  {
    for (i = 2; i >= 1; i -= 0.2)
  }
  
  upperLimit();

  return 0;
}
