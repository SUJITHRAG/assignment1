#include <stdio.h>
#include<string.h>
int main(void) {
	char str[100];
	scanf("%s",str);
	int n,m,i;
	scanf("%d",&n);
	m=strlen(str);
	for(i=n;i<m;i++)
	{
		printf("%c",str[i]);
	}
	return 0;
}
