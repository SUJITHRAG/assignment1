#include <stdio.h>
int main(void)
{
	int a[100],i,n,temp,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
		}
		}
	printf("%d\t",a[i]);
	}
	return 0;
}
