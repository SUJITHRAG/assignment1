#include<stdio.h>


#include<string.h>


int main(void)


{


char a[100];


gets(a);


int k,i;


k=strlen(a);


if(k%2!=0)


{ch[(k-1)/2]='*';


}else


{


ch[k/2]='*';


ch[(k/2)-1]='*';


}


printf("%s",a);


return 0;


}

