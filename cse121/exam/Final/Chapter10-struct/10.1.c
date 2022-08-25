//Qus: Define a structure data type called time_struct containing three members


#include<stdio.h>
struct time_struct
{
    int hour;
    int minute;
    int second;
};
int main()
{
    struct time_struct t;
    printf("Enter hour minute second \n");
    scanf("%d %d %d",&t.hour,&t.minute,&t.second);

    printf("OUTPUT\n");
    printf("%d:%d:%d",t.hour,t.minute,t.second);

}

