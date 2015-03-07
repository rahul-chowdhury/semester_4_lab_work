#include<stdio.h>

void sort(int *arr, int n);

int main()
{
    
    int i,j,n;
    printf("enter the no. of elements: ");
    scanf("%d",&n);
    int arr[n];
    for(i=1;i<=n;i++)
   {
    printf("Enter integer %d: ",i);
    scanf("%d",&arr[i-1]);
    }
    sort(arr,n);
    printf("Sorted list is:\n");
    for(j=0;j<n;j++)
	printf("%d ",arr[j]);
    printf("\n");
    return 0;
}

void sort(int *arr, int n)
{
    int i,largest,pos;
    if(n==1)
	return;
    else
	{
	  largest=arr[0];
	  pos=0;
          for(i=1;i<n;i++)
	  {
	     if(arr[i]>largest)
             {
		largest=arr[i];
	        pos=i;
	     }
	  }
	  arr[pos]=arr[n-1];
	  arr[n-1]=largest;
   	  sort(arr,n-1);
	}
}
