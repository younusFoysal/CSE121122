Qus: 
Given a string 
 char str[ ] =”123456789”;
Write a program that displays the following:
 1
 2 3 2
 3 4 5 4 3
 4 5 6 7 6 5 4
5 6 7 8 9 8 7 6 5




Ans:

#include <stdio.h>
int main() {
   int i, rows, k = 0, count = 0, count1 = 0,m;
   char space[100]="123456789";
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = 1; i <= rows; ++i) {
      for (m = 1; m <= rows - i; m++) {
         printf("  ");
         ++count;
      }
      while (k != 2 * i - 1) {
         if (count <= rows - 1) {
            printf("%d ", i + k);
            ++count;
         } else {
            ++count1;
            printf("%d ", (i + k - 2 * count1));
         }
         ++k;
      }
      count1 = count = k = 0;
      printf("\n");
   }
   return 0;
}
