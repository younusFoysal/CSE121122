//6.2Write a program that computs & prints a table of factorials for any given integer number.
#include <stdio.h>
int main(){
int a,fact=1,i;
printf ("Enter your number for factorial:");
scanf("%d",&a);
for (i=1;i<=a ;i++ )
{
    fact=fact*i;
}
printf ("fact:%d",fact);
return 0;
}
