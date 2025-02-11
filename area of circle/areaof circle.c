#include<stdio.h>

int main()
{
    float r,area, circumference , pi=3.1416;

    printf("enter the radius: ");

    scanf("%f",&r);

    area= pi *r*r;
    circumference= 2 * pi*r;

    printf("Area =%f \n", area);
    printf("circumference=%f \n", circumference);
    return 0;
}
