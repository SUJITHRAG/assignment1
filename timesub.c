#include <stdio.h>
int main(void)
{
	int t1,t2,m1,m2,h1,h2;
	scanf("%d%d%",&t1,&m1);
	scanf("%d%d",&t2,&m2);
	h1=t1-t2;
	h2=m1-m2;
	printf("%d\t%d",h1,h2);
	return 0;
}
