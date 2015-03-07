#include<iostream>
#include<stdlib.h>
using namespace std;
struct stack
{
	int data;
	struct stack *link;
};
struct MyStack
{
	struct stack *start;
	int top;
};
void Initialize(struct MyStack *s)
{
	s->top=-1;
	s->start=NULL;
}
void Push(struct MyStack *s,int x)
{
	int i;
	struct stack *node=(struct stack *)malloc(sizeof(struct stack));
	struct stack *temp;
	if(s->top==-1)
	{
	s->start=node;
	node->data=x;
	node->link=NULL;
	}
	else
	{
	temp=s->start;
	for(i=0;i<s->top;i++)
		temp=temp->link;
	temp->link=node;
	node->data=x;
	node->link=NULL;
	}	
	
}
void Pop(struct MyStack *s,int &x)
{
	int i;
	struct stack *temp;
	if(s->top==-1)
	{
		cout<<"error message:Stack underflow"<<endl;
		return;
	}
	temp=s->start;
	for(i=0;i<s->top-1;i++)
		temp=temp->link;
	x=(temp->link)->data;
	free(temp->link);
	temp->link=NULL;
	
}
int CurrentSize(struct MyStack *s)
{
	return s->top+1;
}
int isEmpty(struct MyStack *s)
{
	if(s->top==-1)
		return 1;
	return 0;
}
int main()
{
	int x,i;
	cout<<"creating stack1 of...."<<endl;
	struct MyStack s1;
	Initialize(&s1);
	cout<<"pop from stack1...."<<endl;
	Pop(&s1,x);
	cout<<"push 1 into stack1...."<<endl;
	Push(&s1,1);
	cout<<"pushed "<<x<<" into stack"<<endl;
	cout<<"push 2 into stack1...."<<endl;
	Push(&s1,2);
	cout<<"pushed "<<x<<" into stack"<<endl;
	cout<<"creating stack2...."<<endl;
	struct MyStack s2;
	Initialize(&s2);
	cout<<"creating stack3 ...."<<endl;
	struct MyStack s3;
	Initialize(&s3);
	cout<<"creating stack4...."<<endl;
	struct MyStack s4;
	Initialize(&s4);
	cout<<"push 5 into stack2,stack3,stack4...."<<endl;
	Push(&s2,5);
	cout<<"pushed "<<x<<" into stack"<<endl;
	Push(&s2,5);
	cout<<"pushed "<<x<<" into stack"<<endl;
	Push(&s2,5);
	cout<<"pushed "<<x<<" into stack"<<endl;
	cout<<"get current size of stack1...."<<endl;
	cout<<CurrentSize(&s1)<<endl;
	cout<<"get current size of stack2...."<<endl;
	cout<<CurrentSize(&s2)<<endl;
	cout<<"get current size of stack3...."<<endl;
	cout<<CurrentSize(&s3)<<endl;
	cout<<"get current size of stack4...."<<endl;
	cout<<CurrentSize(&s4)<<endl;
	cout<<"push 10 into stack4...."<<endl;
	Push(&s4,10);
	cout<<"pushed "<<x<<" into stack"<<endl;
	cout<<"pop from stack2...."<<endl;
	Pop(&s2,x);
	cout<<"popped element is "<<x<<endl;
	cout<<"pop from stack3...."<<endl;
	Pop(&s3,x);
	cout<<"pop from stack4...."<<endl;
	Pop(&s4,x);
	cout<<"popped element is "<<x<<endl;
	cout<<"pop from stack3...."<<endl;
	Pop(&s3,x);
	cout<<"pop from stack4...."<<endl;
	Pop(&s4,x);
	cout<<"push 15 into stack4...."<<endl;
	Push(&s4,15);
	cout<<"push 20 into stack4...."<<endl;
	Push(&s4,20);
	cout<<"pushed "<<x<<" into stack"<<endl;
	cout<<"push 30 into stack4...."<<endl;
	Push(&s4,30);
	cout<<"pushed "<<x<<" into stack"<<endl;
	cout<<"get current size of stack1...."<<endl;
	cout<<CurrentSize(&s1)<<endl;
	cout<<"get current size of stack2...."<<endl;
	cout<<CurrentSize(&s2)<<endl;
	cout<<"get current size of stack3...."<<endl;
	cout<<CurrentSize(&s3)<<endl;
	cout<<"get current size of stack4...."<<endl;
	cout<<CurrentSize(&s4)<<endl;
	return 0;
}
