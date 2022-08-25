//Qus:  Write a program that promotes the user for two files, one containing a line of text known as source file and other ,an empty file known as target file and then copies the contents of source file into target file.


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
