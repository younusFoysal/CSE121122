//7.11write a program that will compute the length of a given character string//

#include <stdio.h>
#include <string.h>
int main()
{
  char a[100];
  int length;

  printf("Enter a string:");
  gets(a);

  length = strlen(a);

  printf("Length of the string =%d", length);

  return 0;
}
