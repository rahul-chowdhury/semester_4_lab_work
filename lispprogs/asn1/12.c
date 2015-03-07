#include<stdio.h>		//including the required package/s
int largest=0,length=0,n=0;	//initializing global variables
void traverse(int k,int a[])
{
	int i=0;
	if(a[k]>largest)	
	largest=a[k];
	for(i=1;i<=n;i++)
	{
		if(n*k+i<length)
		traverse(n*k+i,a);
	}
}
int main()
{
	int i=0;
	printf("enter the outdegree of each node of the tree:");
	scanf("%d",&n);	
	printf("enter the no. of elements: ");
	scanf("%d",&length);
	int a[length];
	for(i=0;i<length;i++)
	{
		printf("enter element %d: ",i+1);	
		scanf("%d",&a[i]);	//taking input from the user
	}
	traverse(0,a);
	printf("the largest element is %d\n",largest);	//printing the result
	return 0;
}
