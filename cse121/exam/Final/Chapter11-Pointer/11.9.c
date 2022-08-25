//Write a function (using pointer parameter) that
//reverse the elements of a given array.
#include<stdio.h>
void rev(int *a,int n);
int main()
{
    int a[10],n,i;

    printf("Enter a size of array : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    rev(a,n);
}
void rev(int *a,int n)
{
    int i,t;

    for(i=0;i<n/2;i++)
    {
        t = a[i];
        a[i] = a[n-i-1];
        a[n-i-1] = t;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

}
