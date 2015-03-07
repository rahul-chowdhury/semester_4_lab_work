#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int compare(char* s1, char* s2)
{
    if(((*s1)=='\0')&&((*s2)=='\0'))
        return 0;
    else if(*s1<*s2)
        return -1;
    else if(*s1>*s2)
        return 1;
    else
        return(compare(s1+1,s2+1));
}

int main()
{
  char str1[100],str2[100];
  int p;
  printf("enter first string:\n");
  gets(str1);
  printf("enter second string:\n");
  gets(str2);
  p=compare(str1,str2);
  printf("output: %d\n",p);
  return 0;
}


