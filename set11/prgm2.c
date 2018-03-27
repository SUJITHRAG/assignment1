#include <stdio.h>
int main(void) {
	int n,count=0,i,m;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	
		if((n/i==2) && (n%i==0))
		{
			printf("%d",i);
			count=1;
			break;
		}
	}
            if(count==0)
	{
		printf("%d",n);
	}
	return 0;
}
