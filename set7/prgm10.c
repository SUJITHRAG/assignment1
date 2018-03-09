#include<stdio.h>
int main(void)
{
	int n,i,a,b,p;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		a=pow(2,i);
		if(a>n)
		{
			b=i;
			break;
		}
	}
	p=pow(2,b);
	printf("\n%d",p);
	return 0;
}
