// Qus: Define a structure data type called time_struct containing three members
// using function


#include<stdio.h>
struct time_struct
{
    int hour;
    int minute;
    int second;
};

void dis(struct time_struct t);

int main()
{
    struct time_struct t;
    printf("Enter hour minute second \n");
    scanf("%d %d %d",&t.hour,&t.minute,&t.second);

    dis(t);

    return 0;
}
void dis(struct time_struct t)
{
    printf("OUTPUT\n");
    printf("%d:%d:%d",t.hour,t.minute,t.second);
}






