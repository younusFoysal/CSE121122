Qus: 
Develop a program that will read and store the details of a list of students in the format
Roll No. Name Marks Obtained
…………. ……… ………………..
…………. ……… ………………..
And produce the following output lists:
a) Alphabetical list of names, roll numbers and marks obtained.
b) List sorted on roll numbers.
c) List sorted on marks (rank-wise list)


Ans:

#include<stdio.h>
int main()
{
    char str[10][10],str2[10];
    int i,j,n,com;

    printf("Enter a value of n : ");
    scanf("%d",&n);

        printf("Enter strings : \n");
        for(i=0; i<n; i++)
        {
            scanf("%s",str[i]);
        }



    //sorted name
        for(j=1;j<n;j++)
        {
            for(i=0;i<n-j;i++)
            {
                com = strcmp(str[i],str[i+1]);
                if(com>0)
                {
                    strcpy(str2,str[i]);
                    strcpy(str[i],str[i+1]);
                    strcpy(str[i+1],str2);
                }
            }
        }
        /*
        //print
        printf("output\n");
        for(i=0; i<n; i++)
            printf("%s\n",str[i]);
    */


    //sorted roll
    int roll[10],min,temp;

    printf("Enter rolls : \n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&roll[i]);
    }
    for(i=0; i<n; i++)
    {
        min=i;
        for(j=i+1; j<n; j++)
        {
            if(roll[j]<roll[min])
            {
                min=j;
            }
        }
        temp = roll[i];
        roll[i] = roll[min];
        roll[min] = temp;
    }
    /*
    //print roll
    printf("output\n");
    for(i=0; i<n; i++)
    {
        printf("%d\n",roll[i]);
    }
    */
    //sorted marks
    int mark[10],temp1,min1;
    printf("Enter marks : \n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&mark[i]);
    }

    for(i=0; i<n; i++)
    {
        min1 = i;
        for(j=i+1; j<n; j++)
        {
            if(mark[j]<mark[min1])
            {
                min1=j;
            }
        }
        temp1 = mark[i];
        mark[i] = mark[min1];
        mark[min1] = temp1;
    }

//print result
printf("Roll\tname\tmark\n");
    for(i=0; i<n; i++)
    {
        printf("%d\t%s\t%d\n",roll[i],str[i],mark[i]);
    }

    return 0;
}



