#include<stdio.h>
int main(void)
{
	int n,b[100],i,sum=0;
	scanf("%d",&n);
            for(i=0;i<n;i++)
            {
             scanf("%d",&b[i]);	
            }
            for(i=0;i<n;i++)
            {
            	sum=sum+b[i];
            }
	printf("%d",sum);
	return 0;
}
