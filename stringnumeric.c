#include <stdio.h>
int main(void)
{
	char a[100];
	int count,i,b;
	scanf("%s",a);
	b=strlen(a);
	for(i=0;i<b;i++)
	{
		if(a[i]>=0 && a[i]<=9)
		{
			count=1;
		}
	}
		if(count==1)
		{
			printf("YES");
		}
		else
		{
			printf("NO");
		}
			
	
	return 0;
}
