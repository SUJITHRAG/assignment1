#include <stdio.h>
int main(void)
{
	int num,count=1;
	scanf("%d",&num);
	while(num!=0)
	{
		num=num/10;
		if(num!=0)
		{
			count=count+1;
		}
	}
	printf("%d",count);
	return 0;
}
