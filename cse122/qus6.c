qus: 
 The function test is coded as follows:

int test ( int number)
{
int m,n=0;
while (number)
{
m= number % 10;
if ( m% 2 )
n=n +1;
number = number/10;
}
return ( n) ;
}




Ans:

What will be the values of x and y when the following statement are executed
int x = test (135);
answer : x=3
int y= test (246 );
Answer : y=o
