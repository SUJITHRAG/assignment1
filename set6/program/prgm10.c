#include <stdio.h>
int main()
{
    int i, num, n1 = 1, n2= 1,n3;
    scanf("%d", &num);
printf("%d\t%d",n1,n2);
   for (i = 1; i <num-1; i++)
    {
  
        n3 = n1 + n2;
        printf("\t%d\t",n3);
        n1 = n2;
        n2 = n3;
    }
    return 0;
}
