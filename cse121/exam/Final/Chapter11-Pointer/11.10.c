//{1,2,3,4,5}
//{1,2,3,4,5}
#include<stdio.h>
int main()
{
    int a1[10];
    int a2[10];

    int i,m,n;
    printf("Enter first array size(m) & value : ");
    scanf("%d",&m);
    for(i=0; i<m; i++)
        scanf("%d",&a1[i]);

    printf("Enter second array size(n) & value : ");
    scanf("%d ",&n);
    for(i=0; i<n; i++)
        scanf("%d",&a2[i]);

    if(compArr(a1,a2,m,n) == 1)
        printf("identical");
    else
        printf("Not identical");

}
int compArr(int *a1,int *a2,int m,int n)
{
    int i,j,count=0;
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            if(a1[i] == a2[j])
            {
                count++;
            }
        }
    }

    if(count==m && count==n)
        return 1;
    else
        return 0;

}
