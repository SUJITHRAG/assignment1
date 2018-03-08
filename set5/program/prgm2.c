#include<stdio.h>
#include<string.h>
int main(void)
{
 char a[10],s[10];
 int b,d;
 scanf("%s",a);
 scanf("%s",s);
 b=strlen(a);
 d=strlen(s);
 if(b>d)
 {
 	printf("%s",a);
 }
 else if(b<d)
 {
 	printf("%s",s);
 }
 else
 {
 	printf("%s",s);
 }
 return 0;
}
