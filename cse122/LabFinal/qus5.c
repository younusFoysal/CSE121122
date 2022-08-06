/* Write a C program that uses fscanf function to read integer
values from a file, computes the square of each integer value
and places the resultant values in a different file. */
// Credit goes to Shuvo 


#include<stdio.h>

int main()
{

    FILE *file1,*file2;
    file1 = fopen("input002.txt","r");
    file2 = fopen("output002.txt","a");

    int i,n,square;
    fprintf(file2,"computes the square \n");

    for(i=0; i<5; ++i)
    {
        fscanf(file1,"%d",&n);
        square = n*n;
        printf("%d ",square);

        fprintf(file2,"%d ",square);
    }

    fclose(file1);
    fclose(file2);
}
