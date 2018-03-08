#include <stdio.h>
#include<string.h>
int main(void)
{
	char a[100];
	int b,i,num,alp;
	b=strlen(a);
	for(i=0;i<b;i++)
	{
	if(a[i]>='0' && a[i]<='9')
	{
		num=1;
	}
	if('a'<=a[i] && a[i]>='z')
	{
		alp=1;
	}
	}
	if(num==1 && alp==1)
	{
		printf("YES");
	}
	else
	{
	printf("NO");
	}
	return 0;
}
