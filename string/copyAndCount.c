// copy one string to another and count the number of character copoid.

#include<stdio.h>
int main()
{
 char a[20], b[20];
 int ch;
 printf("Enter your string: ");
 gets(a); // read string from user
 strcpy(b, a); //copy a to b
 ch = strlen(b); //return the length of string
 printf("the copied output is: %s\n",b);
 printf("The number of character copied: %d\n",ch);
 return  0;
}
