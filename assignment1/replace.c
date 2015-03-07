#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void replace(char *s, char c1, char c2, int len)
{
 
  if(len==0)
     return;
  else
     {
	if(s[len-1]==c1)
           s[len-1]=c2;
  	return replace(s,c1,c2,len-1);
     }
}
int main()
{
   char str[100],c1,c2;
   int i=0;
   printf("Enter the string\n");
   scanf("%s",str);
   getchar();
   printf("Enter the character to be replaced :");
  c1=getchar();
  getchar();
   printf("Enter the character to be replaced with :");
    c2=getchar();
   replace(str,c1,c2,strlen(str));
   printf("New string is: %s \n",str);
   return 0;
}


