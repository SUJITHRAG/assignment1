#include<stdio.h>
 int main(void)
{
 int a;
 printf("enter value");
 scanf("%d",&a);
if(a>0)
{
printf("positive");
}
else if(a<0)
{
printf(" negative");
}
else
{
printf("0 is neither positive nor negative");
}
return 0;
}
