//Qus: write a function that receives a sorted array
//inserts the value in its correct place.

#include<stdio.h>
int main()
{
    int a[10];
    int n,i,value,temp;
    printf("Enter size of array : ");
    scanf("%d",&n);
    printf("Enter a sorted array\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter a insert value : ");
    scanf("%d",&value);
    for(i=0;i<n;i++)
    {
        if(value<a[i])
        {
            temp = i;
            break;
        }
    }
    for(i=n;i>temp;i--)
    {
        a[i] = a[i-1];
    }
    a[temp] = value;
    for(i=0;i<=n;i++)
    {
        printf("%d ",a[i]);
    }
}
