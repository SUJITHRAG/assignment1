#include <stdio.h>

int main(void)
{
	int m,n,t;
	scanf("%d%d",&m,&n);
	t=m*n;
	if(t%2==0)
	{
		printf("EVEN");
	}
	else if(t%2==1)
	{
	printf("ODD");
	}
	return 0;
}
