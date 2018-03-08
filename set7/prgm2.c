#include<stdio.h>
#include<string.h>
int main(void)
{
	char s[100];
	int i,a,count=0;
	scanf("%s",s);
	a=strlen(s);
	for(i=0;i<a;i++)
	{
		if(s[i]=='0'||s[i]=='1')
		{
			count=1;
			break;
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
