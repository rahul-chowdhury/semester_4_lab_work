#include<stdio.h>
int factorial(int n)
{
   if(n==1)
     return 1;
   else
     return n*factorial(n-1);
}

int main()
{
  int f=1,n;   
  printf("Enter the integer: ");
  scanf("%d",&n);
  f=factorial(n);
  printf("The factorial of %d is %d\n",n,f);
   return 0;
}


