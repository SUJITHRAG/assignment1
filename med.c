#include <stdio.h>
int main(void)
{
	int a[100],i,n,sum=0,res;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
		res=sum/n;
	}
		printf("%d",res);
	return 0;
}
