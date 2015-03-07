#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
int main()
{
int iter,i=0,j,c=0;
long length,p;
char a[100],*b;
scanf("%s",a);
b=strtok(a," =");



p=length;
for(i=1;i<=iter;i++)
{
	for(j=1;j<=(int)(pow(2,i-1));j++)
		p=p+length/3;
	length=length/3;
}
printf("%ld",3*p);
}
