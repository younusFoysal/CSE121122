//5.2Write a  program to find the number of & sum of all integers greater than 100 & less than 200 that are divisible by 7//

#include<stdio.h>
int main()
{
    int i;
    float sum=0;
    for(i=100;i<200;i++)
    {
    if(i%7 == 0){
     printf(" %d \n",i);
    sum=sum+i;
    }

    }
    printf("The result is %f",sum);
    return 0;
}
