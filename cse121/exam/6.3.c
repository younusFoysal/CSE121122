#include<stdio.h>
#include<conio.h>
int main(){
long int Num,Temp,Sum=0,Dig;

printf("Enter any Number:--\n");
scanf("%ld",&Num);

Temp=Num;
while(Temp != 0){
        Dig=Temp%10;
        Temp=Temp/10;
        Sum=Sum+Dig;
}

printf("Sum of Number %ld is %ld\n",Num,Sum);

}
