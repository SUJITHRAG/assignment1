#include<stdio.h>
int main(void) {
	int n,b[10],i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&b[i]);
		if(b[i]!=i)
		{
			printf("%d",i);
			break;
		}
	}
	return 0;
}
