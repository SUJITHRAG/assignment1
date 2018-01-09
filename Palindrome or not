#include <stdio.h>
int main(void)
{
    int n, rev = 0, rem,integer;

    printf("Enter an integer: ");

    scanf("%d", &n);

    integer = n;

    while( n!=0 )
    {
        rem = n%10;
        rev = rev*10 + rem;
        n=n/10;
    }
  if (integer == rev)
        printf("palindrome");
    else
        printf("not a palindrome");
   return 0;
}
