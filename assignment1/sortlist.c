#include<stdio.h>
struct list
{
int data;
struct list* node;
};
struct list *sortLL(struct list *start)
{
	struct list *temp=start;
	struct list *temp2=NULL;
	int n;
	while(temp->node!=NULL)
	{
		temp2=temp->node;
		while(temp2!=NULL)
		{
			if(temp->data>temp2->data)
			{
				n=temp->data;
				temp->data=temp2->data;
				temp2->data=n;
			}
			temp2=temp2->node;
			
		}
		temp=temp->node;
	}
	return start;
}
int main()
{
int n,i,x;
struct list*start=NULL;
struct list *l=(struct list *)malloc(sizeof(struct list));
start=l;
printf("enter the no. of elements: ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("enter element %d: ",i);
scanf("%d",&x);
l->data=x;
l->node=NULL;
}
sortLL(start);
printf("the sorted list is : ");
while(start!=NULL)
{
printf("%d ",start->data);
start=start->node;
}
return 0;
}















