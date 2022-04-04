#include <stdio.h>
#include <stdlib.h>
#include <float.h>

union realandbit
{
    int32_t x;
    float y;

} real1;

int main(){

    real1.x = 0;
   
    printf("Enter your real number:\n");
    scanf("%f",&real1.y);

    for (int i = 31; i >= 0; i--)
  {
    int a = real1.x >> i;

    if (a & 1)
      printf("1");
    else
      printf("0");
  }
  printf("\n");

    return 0;
}