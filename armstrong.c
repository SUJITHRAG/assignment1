#include <stdio.h>
int main(void)
{
    int n, n1, rem, sum = 0;
    scanf("%d", &n);
    n1= n;
   while (n1 != 0)
    {
        rem= n1%10;
        sum=sum+(rem*rem*rem);
        n1=n1/ 10;
    }
   if(sum == n)
        printf("YES");
    else
        printf("NO");
        return 0;
}
