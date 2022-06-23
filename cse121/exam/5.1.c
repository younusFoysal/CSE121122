//5.1Write a c program to determine whether a given number is true or false without using else option//

#include<stdio.h>
int main()
{
    int n;
    printf("The number is ");
    scanf("%d",&n);
     if(n%2==0)
        printf("The number is even",n);
     if(n%2!=0)
        printf("The number is odd",n);
    return 0;
}
