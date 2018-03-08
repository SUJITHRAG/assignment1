#include<stdio.h>
int main(void)
{
	int a[100],i,high;
	
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	high=a[0];
	for(i=0;i<10;i++)
	{
	if(a[i]>high)
	{
		high=a[i];
	}
	}
	printf("%d",high);
	return 0;
}
