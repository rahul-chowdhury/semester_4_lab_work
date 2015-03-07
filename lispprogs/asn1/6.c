#include<stdio.h>

int search(int arr[], int n, int x)
{
   if(n==0)
     return 0;
   else if(arr[n-1]==x)
     return 1;
   else
     return (search(arr,n-1,x));
}

int main()
{
   int i=0,found=0,num,n;
   printf("Enter the number of integers: ");
   scanf("%d",&n);
   int arr[n];
  for(i=1;i<=n;i++)
  {
  printf("Enter element %d: ",i);
     scanf("%d",&arr[i-1]);
   }
   printf("enter element to be searched: ");
   scanf("%d",&num);
   found=search(arr,n,num);
   if(found == 0)
     printf("the element is not found in the list\n");
   else
     printf("the element is found in the list\n");
   return 0;
}
 

