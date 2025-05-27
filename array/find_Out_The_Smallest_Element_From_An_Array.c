#include<stdio.h>
int main()
{
    int i,n,small,arr[100];
    printf("Enter the number of Elements: ");
    scanf("%d", &n);
    for(i=0; i<n; i++){
        printf("Enter %dth number: ",i);
        scanf("%d",&arr[i]);
    }
    small=arr[0];
    for(i=1;i<n;i++){
        if(arr[i] < small)
        small=arr[i];
    }


    printf("The smallest elements is: %d", small);
}
