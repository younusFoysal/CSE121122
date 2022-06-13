Qus: 
Write a C program to check whether the given number is-
i)Prime ii)Not prime


Ans:


#include <stdio.h>
main()
{
    int n, i, c = 0;
        printf("Enter any number n:");
         scanf("%d", &n);
     for (i = 1; i <= n; i++)
     {
       if (n % i == 0)
         { c++; }
     }
       if (c == 2)
      {
        printf("n is a Prime number");
      }
      else
      { printf("n is not a Prime number");
      }
 return 0;
 }


