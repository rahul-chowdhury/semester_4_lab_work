#include<stdio.h>

int largest(int *arr, int n)
{
   int temp;
   if(n==1)
    return(arr[n-1]);
   else
    {
	if(arr[n-1]>arr[n-2])
        {
	  temp=arr[n-1];
	  arr[n-1]=arr[n-2];
	  arr[n-2]=temp;
	}
        return(largest(arr,n-1));
    }
}
int main()
{
   int i,large,n;
   printf("Enter the number of integers: ");
   scanf("%d",&n);
   int list[n];
  for(i=1;i<=n;i++)
  {
  printf("Enter element %d: ",i);
     scanf("%d",&list[i-1]);
   }
   large=largest(list,n);
   printf("The largest number is %d\n",large);
   return 0;
}


