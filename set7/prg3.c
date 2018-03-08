#include<stdio.h>
int main(void)
{
	char s[100];
	int b,i,count=1;
	scanf("%[^\n]s",s);
	b=strlen(s);
	for(i=0;i<b;i++)
	{ 
	if(s[i]==' ')
	{
	 count++;
	}
	}
	printf("%d",count);
	return 0;
}
