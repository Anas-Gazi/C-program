#include<stdio.h>

int main(){
  int day, years, weeks;
  printf("input days: ");
  scanf("%d", &day);

  years= day/365;
  weeks= day/7;

  printf("year = %d", years);
  printf("weeks = %d", weeks);
  return 0;

}
