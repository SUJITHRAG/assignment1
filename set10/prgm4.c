#include<stdio.h>
int main(void)
{
	int n1,n2,a[10],i;
	scanf("%d %d",&n1,&n2);
	for(i=0;i<n1;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("%d",a[n2-1]);
	return 0;
}
