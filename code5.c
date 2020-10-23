
/*
RUNNING CODE
N: 5
             1
           1   1
         1   2   1
       1   3   3   1
     1   4   6   4   1
*/


#include <stdio.h>
int main() {
   int N, count = 1, k, i, j;
   printf("N: ");
   scanf("%d", &N);
   for (i = 0; i < N; i++) {
      for (k = 1; k <= N - i; k++)
         printf("  ");
      for (j = 0; j <= i; j++) {
         if (j == 0 || i == 0)
            count = 1;
         else
            count = count * (i - j + 1) / j;
         printf("%4d", count);
      }
      printf("\n");
   }
   return 0;
}
