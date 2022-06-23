//6.7(a)Write programs to print the following outputs using for loops.
#include<stdio.h>
int main()
{
    int i,j;

    for(i=1; i<=5; i++) {
        for(j=1; j<=i; j++) {
            printf("%d",i);
        }
        printf("\n");
    }

}
