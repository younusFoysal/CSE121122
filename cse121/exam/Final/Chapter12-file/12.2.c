//Qus:  Write a program that promotes the user for two files, one containing a line of text known as source file and other ,an empty file known as target file and then copies the contents of source file into target file.


#include<stdio.h>

int main()
{
    char id[50],name[50],dep[50];

    FILE *file1,*file2;
    file1 = fopen("input001.txt","r");
    file2 = fopen("output001.txt","a");


    fscanf(file1,"%s %s %s",id,name,dep);

    printf("%s\t%s\t%s\n",id,name,dep);

    fprintf(file2,"%s\t%s\t%s\n",id,name,dep);

    int i;
    int ID;

    for(i=1; i<3; i++)
    {
        fscanf(file1,"%d %s %s",&ID,name,dep);
        printf("%d\t%s\t%s\n",ID,name,dep);
        fprintf(file2,"%d\t%s\t%s\n",ID,name,dep);
    }

    fclose(file1);
    fclose(file2);
}
/*
file name : input001.txt

Id	Name	Department
001	shuvo	CSE
002	emon	EEE

file name : output001.txt

empty

*/
