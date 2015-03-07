#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define true 1
#define false 0

int palindrome(char* s, int n)
{
   if((n==0)||(n==1))
      return 1;
   else if(s[0]!=s[n-1])
      return 0;
   else
      return(palindrome(s+1,n-2));
}
int main()
{
   char *str,ch;
   int palin=false,i=0;
   str=(char*)malloc(sizeof(char)*10000);
   printf("Enter a string:\n");
   while((ch=getchar())!='\n')
   {
      str[i++]=ch;
   }
   palin=palindrome(str,strlen(str));
   if(palin)
     printf("\n%s is a palindrome\n",str);
   else
     printf("\n%s is not a palindrome\n",str);
   return 0;
}

