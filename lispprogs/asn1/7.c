#include<stdio.h>

void reverse(int *arr, int n);

int main()
{
   int i=0,n;
    printf("Enter the number of integers: ");
   scanf("%d",&n);
   int arr[n];
  for(i=1;i<=n;i++)
  {
  printf("Enter element %d: ",i);
     scanf("%d",&arr[i-1]);
   }
   printf("The reverse order is:\n");
   reverse(arr,n);
   printf("\n");
   return 0;
}

void reverse(int *arr, int n)
{
   if(n==0)
     return;
   else
    {
     printf("%d ",arr[n-1]); 
     reverse(arr,n-1);
    }
}
