#include<stdio.h>
int hcf(int n1, int n2)
{
   if(n1%n2==0)
     return n2;
   else
     return(hcf(n2,n1%n2));
}
int main()
{
   int n1,n2,temp,h;
   printf("Enter first integer:");
   scanf("%d",&n1);
   printf("Enter second integer:");
   scanf("%d",&n2);
   if(n1<n2)
   {
     temp=n1;
     n1=n2;
     n2=temp;
   }
   h=hcf(n1,n2);
   printf("the hcf of %d and %d is %d\n",n1,n2,h);
   return 0;
}


