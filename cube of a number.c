#include<stdio.h>
int main(){
  int x;
  printf("input the value of x: \n");
    scanf("%d", &x);
  int cube = x*x*x;

  printf("the cube of %d is  %d,\n",x, cube);
  return 0;
}
