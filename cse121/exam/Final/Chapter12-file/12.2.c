//Qus: Two files DATA1 and DATA2 contain sorted lists of integers.Write a program to produce a 3rd file 

// DATA which holds a single sorted,merged list of these two lists.Use command line arguments to 

// specify the file names.


#include<stdio.h>

int main(int argc,char *argv[])
{
    FILE *fp,*f1,*f2;
    char n;

    fp = fopen(argv[1],"w");

    f1 = fopen("DATA1.txt","r");
    f2 = fopen("DATA2.txt","r");

    n = fgetc(f1);
    while(n != EOF)
    {
        fputc(n,fp);
        n = fgetc(f1);
    }
    
    n = fgetc(f2);
    while(n != EOF)
    {
        fputc(n,fp);
        n = fgetc(f2);
    }

    fclose(f1);
    fclose(f2);
    fclose(fp);
}
