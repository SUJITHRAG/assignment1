#include<stdio.h>
 
int main() {
   int b[30], i,  min;
   for (i = 0; i < 10; i++)
   scanf("%d", &b[i]);
   min = b[0];
   for (i = 0; i < 10; i++) 
   {
      if (b[i] < min)
      {
         min = b[i];
      }
   }
   printf(" %d", min);
   return (0);
}
