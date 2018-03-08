#include <stdio.h>

int main(void)
{
	int m,n,s;
	scanf("%d%d",&m,&n);
	s=m*n;
	if(s%2==0)
	{
		printf("EVEN");
	}
	else if(s%2==1)
	{
	printf("ODD");
	}
	return 0;
}
