#include<stdio.h>
#include<string.h>
int main(void)
{
 int m=1,n=10,i,n1,count=0;
 scanf("%d",&n1);
 for(i=m;i<=n;i++)
 {
   if(n1==i)
   count=1;
   
 }
 if(count==1)
{
printf("YES");
}
 else
 {
 printf("NO");
 }
 return 0;
}
