#include<stdio.h>
#include<string.h>
int main(){
char a[100], b[100];

printf("Enter a string:  ");
gets(a);    // read string from user
strcpy(b, a); // copy string value, a to b
strrev(b);  // reverse string b
if(strcmp(a,b)==0)  // compare 2 string
    printf("This is a palindromic \n");
else
    printf("This is not a palindromic \n");
return 0;
}

/*
Enter a string:  wow
This is a palindromic

Enter a string: Anas
This is not a palindromic
*/
