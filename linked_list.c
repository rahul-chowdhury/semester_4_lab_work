#include<stdio.h>
struct list
{
struct list *node;
int data;
};
struct list *start;
void insert(int x,int pos)
{
int i;
struct list *newnode=(struct list *)malloc(sizeof(struct list));
struct list *l=start;
for(i=2;i<=pos;i++)
l=l->node;
newnode->data=x;
newnode->node=l->node;
if(pos==1)
start=newnode;
else
l->node=newnode;
}
void print()
{
struct list *l=start;
if(l==NULL)
{
printf("empty list\n");
return;
}
while(l!=NULL)
{
printf("%d\t",l->data);
l=l->node;
}
printf("\n");
}
void delete(int pos)
{
if(start==NULL)
{
printf("list is empty.no element available for deletion\n");
return;
}
if(pos==1)
{
printf("deleted element is %d\n",start->data);
start=start->node;
return;
}
struct list *l=start;
int i;
for(i=3;i<=pos;i++)
l=l->node;
printf("deleted element is %d\n",(l->node)->data);
l->node=(l->node)->node;
}
int main()
{
start=(struct list *)malloc(sizeof(struct list));
int menu=1;
char choice;
while(menu==1)
{
printf("ENTER YOR CHOICE:\n1->insert an element\n2->delete an element\n3->show the current list\n4->exit menu\n");
scanf("%c"&choice);
switch(choice)
{
case '1':
{
int x;
printf("enter the element to be inserted: ");
scanf("%d",&x);
printf("enter your choice:\n1->insert at the beginning\n2->insert in the middle\n






















