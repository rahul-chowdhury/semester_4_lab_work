#include<stdio.h>
int sum(int *arr, int n)
{
   if(n==1)
     return(*arr);
   else
     return(*arr+sum(arr+1,n-1));
}

int main()
{
  int i=0,s=0,n;   
  printf("Enter the number of integers: ");
  scanf("%d",&n);
  int arr[n];
  for(i=1;i<=n;i++)
  {
  printf("Enter element %d: ",i);
  scanf("%d",&arr[i-1]);
  }
   s=sum(arr,n);
   printf("The sum of integers: %d\n",s);
   return 0;
}


