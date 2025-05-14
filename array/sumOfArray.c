#include<stdio.h>
int main(){
int i,arr[10],sum=0, num, average;
printf("enter number of element: ");
scanf("%d",&num);

printf("Entert the value: ");
for(i=0; i<num; i++){
    printf("Input %dth value\n",i);
    scanf("%d", &arr[i]);
    sum= sum+ arr[i];
}
for(i=0; i<num; i++)
    printf("\na[%d] = %d",i,arr[i]);
    printf("\n\nSum = %d", sum);

    average = sum/num;
    printf("Average =%d",average);
}
