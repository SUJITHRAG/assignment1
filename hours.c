#include<stdio.h>
int main(void)
{
	int t1,m,s;
	scanf("%d",&t1);
	m=t1/60;
	s=t1%60;
	printf("%d\t%d",m,s);
	return 0;
}
