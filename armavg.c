#include<stdio.h>
int main(void)
{

  int n1, n2, i, t, sum, rem;
  scanf("%d %d", &n1, &n2);
 for(i=n1+1; i<n2; ++i)
  {
      t=i;
      sum=0;
 while(t!=0)
      {
          rem=(t%10);
          sum=sum+(rem*rem*rem);
          t=t/10;
      }
 if(i==sum)
      {
          printf("%d ",i);
      }
  }
  return 0;
}
