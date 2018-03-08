#include<stdio.h>
int main(void)
{
	char a[100];
	int b,i,count=1;
	scanf("%[^\n]s",a);
	b=strlen(a);
	for(i=0;i<b;i++)
	{ 
	if(a[i]=='. ' || a[i]==',')
	{
	 count++;
	}
	}
	printf("%d",count);
	return 0;
}
