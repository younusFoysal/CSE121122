//5.1 Write a c program to determine whether a given number is true or false without using else option//

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

//5.2 Write a c program to determine whether a given number is true or false with else option

#include<stdio.h>
int main()
{
    
    
    int i,n;
    printf("Enter a number : ");
    scanf("%d",&n);
    if(n%2==0)
        printf("Even");
    else
        printf("odd");

}


