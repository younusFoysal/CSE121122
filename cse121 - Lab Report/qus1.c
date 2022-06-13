qus:
Write a C program to evaluate the following using loops-
i)1+x^2/2!+x^4/4!+………+up to 5 terms

Ans:


#include<stdio.h>
#include<math.h>
int main(){
    int x,i,j,k=2;
    float sum=1,h;
     printf("Enter the value of base:");
      scanf("%d",&x);
     for(i=1; i<=4; i++)
      {
             h=pow(x,k);
             int f=1;
                   for(j=1; j<=k; j++)
                  {
                    f = f*j;
                   }
            k=k+2;
            sum=sum+(h/f);
      }
    printf("The sum is %f",sum);
    return 0;}

