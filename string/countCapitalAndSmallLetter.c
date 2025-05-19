#include<stdio.h>
int main()
{
    int upper =0, lower =0;
    char ch[80];
    int i;
    printf("Enter the string: ");
    gets(ch); //read string from user
    i=0;
    while(ch[i]!='\0')
    {
        if(ch[i]>='A' && ch[i]<='Z')
         upper ++;
        if(ch[i]>='a' && ch[i]<='z')
         lower++;
        i++;
    }
printf("Upper case letters: %d\n",upper);
printf("lower case letters: %d",lower);
}

/*
Enter the string: SHAHrasti Chnadpur
Upper case letters: 5
lower case letters: 12
*/
