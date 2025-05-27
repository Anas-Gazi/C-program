#include<stdio.h>
int main()
{
    int i,n;
    int large,arr[100];
    printf("Enter total number of elements : " );
    scanf("%d",&n);
    for(i=0;i<n; ++i){
        printf("Enter number %d: ",i);
        scanf("%d", &arr[i]);
    }
    large = arr[0];
    for(i=1;i<n;i++){
        if(arr[i] >large)
            large =arr[i];
    }
    printf("Largest element = %d",large);

    return 0;
}
