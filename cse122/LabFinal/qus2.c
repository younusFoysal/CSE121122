/*Declare structure named “employee” to store details of an
employee like name, age and salary. Then declare an array of
structure employee named “empv” of size 10,to store details
of multiple employees. Now do the following tasks:
1. Store employee details in structure array.
2. Calculate the average salary of an employee.*/


#include<stdio.h>

struct employee{
    char name[15];
    int age;
    float salary;
};
int main(){

    struct employee empv[10];

    int i,n;
    float avg,sum = 0;
    printf ("Enter the number: ");
    scanf("%d",&n);

    for(i=1; i<=n; i++){
        printf("Enter the name %d : \n", i );
        scanf("%s", empv[i].name);

        printf("Enter the age:", i);
        scanf("%d",&empv[i].age);

        printf("Enter the Salary:", i);
        scanf("%f",&empv[i].salary);

        sum = sum + empv[i].salary;
    }

    avg = sum/n;
    printf("The avg Salary is: %f", avg);

    return 0;

}
