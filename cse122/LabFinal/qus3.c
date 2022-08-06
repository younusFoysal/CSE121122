/* write a function (using pointer parameters) that compares two
integer arrays to see whether they are identical.the function
returns 1 if they are identical,0 otherwise. */
// Credit goes to Shuvo 
//identical
//{1,2,3,4,5}
//{1,2,3,4,5}
#include<stdio.h>
int main()
{
    int arr1[10];
    int arr2[10];

    int i,m,n;
    printf("Enter first array size(m) & value : ");
    scanf("%d ",&m);
    for(i=0; i<m; i++)
        scanf("%d",&arr1[i]);

    printf("Enter second array size(n) & value : ");
    scanf("%d ",&n);
    for(i=0; i<n; i++)
        scanf("%d",&arr2[i]);

    if(compArr(arr1,arr2,m,n) == 1)
        printf("identical");
    else
        printf("Not identical");

}
int compArr(int *arr1,int *arr2,int m,int n)
{
    int i,j,count=0;
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            if(arr1[i] == arr2[j])
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
