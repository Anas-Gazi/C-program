#include<stdio.h>
int main(){

  float c, f;

  printf("Enter temperature in Celsius: ");
  scanf("%f", &c);

  f = c * (9/5)+32;

  printf("fahrenheit value is: %f ",f );
  return 0;
}

