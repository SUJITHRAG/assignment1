#include<stdio.h>
int main(void)
{
	int a,b=1,i,count=0;
	scanf("%d",&a);
	for(i=0;i<=a;i++)
	{
		b=b*2;
		if(a==b)
		count=1;
	}
	if(count==1)
	printf("YES");
	else
	printf("NO");
	return 0;
}
