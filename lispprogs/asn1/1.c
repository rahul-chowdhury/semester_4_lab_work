#include<stdio.h>

int fact(int n)
{
   if(n==0)
     return 1;
   else
     return n*fact(n-1);
}
int main()
{
   int n,f=1;
   printf("Enter a number:");
   scanf("%d",&n);
   if(n>0)
      f=fact(n);
   printf("\nThe factorial of %d is %d\n",n,f);
   return 0;
}


