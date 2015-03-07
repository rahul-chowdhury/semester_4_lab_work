#include<iostream>
#include<stdlib.h>
#include"MyStack.h"

using namespace std;

void MyStack::Push(const int &x)
{
if(top==size-1)
{
cout<<"error message:Stack overflow"<<endl;
return;
}
a[++top]=x;
}

void MyStack::Pop(int &x)
{
	if(top==-1)
	{
		cout<<"error message:Stack underflow"<<endl;
		return ;
	}
	x=a[top--];
}
int MyStack::GetMaxSize()
{
	return size;
}
int MyStack::CurrentSize()
{
	return top+1;
}
int MyStack::isEmpty()
{
	if(top==-1)
		return 1;
	return 0;
}
void MyStack::Display()
{
	if(top==-1)
		cout<<"stack is empty"<<endl;
	else
	{
		for(int i=0;i<=top;i++)
		{
		cout<<a[i]<<" ";
		}
		cout<<endl;
	}
	
}
MyStack::MyStack(const int &n)
{
size=n;
a=(int *)malloc((size)*sizeof(int));
top=-1;
}
MyStack::MyStack()
{
size=100;
a=(int *)malloc((size)*sizeof(int));
top=-1;
}

