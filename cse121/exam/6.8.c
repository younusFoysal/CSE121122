//6.8 write a program to read the age of 100 persons & count the number of persons in the age group 50 to 60.use for & continue statement
#include<stdio.h>
#include<conio.h>
int main(){
int age[100],i,n,count=0;

printf("\n Input age of 100 persons:-");
for(i=0;i<100;i++)
scanf("%d",&age[i]);
for(i=0;i<100;i++)
{
if(age[i]>=50&&age[i]<=60)
count++;
else
continue;
}
printf("There are %d persons whose age is in between 50 and 60 years",count);

}
