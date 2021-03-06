#include<iostream>
#include<stdlib.h>
using namespace std;
struct MyStack
{
int size;
int *a;
int top;
};
void Initialize(struct MyStack *s,int n)
{
s->size=n;
s->a=(int *)malloc((s->size)*sizeof(int));
s->top=-1;
}
void Push(struct MyStack *s,int x)
{
if(s->top==s->size-1)
{
cout<<"error message:Stack overflow"<<endl;
return;
}
s->a[++(s->top)]=x;
}
void Pop(struct MyStack *s,int &x)
{
if(s->top==-1)
{
cout<<"error message:Stack underflow"<<endl;
return;
}
x=s->a[(s->top)--];
}
int GetMaxSize(struct MyStack *s)
{
return s->size;
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
cout<<"creating stack1 of size 10...."<<endl;
struct MyStack s1;
Initialize(&s1,10);
cout<<"pop from stack1...."<<endl;
Pop(&s1,x);
cout<<"push 1 into stack1...."<<endl;
Push(&s1,1);
cout<<"push 2 into stack1...."<<endl;
Push(&s1,2);
cout<<"get maximum size of stack1...."<<endl;
cout<<GetMaxSize(&s1)<<endl;
cout<<"creating stack2 of size 4...."<<endl;
struct MyStack s2;
Initialize(&s2,4);
cout<<"creating stack3 of size 8...."<<endl;
struct MyStack s3;
Initialize(&s3,8);
cout<<"creating stack4 of size 2...."<<endl;
struct MyStack s4;
Initialize(&s4,2);
cout<<"push 5 into stack2,stack3,stack4...."<<endl;
Push(&s2,5);
Push(&s2,5);
Push(&s2,5);
cout<<"push 10 into stack4...."<<endl;
Push(&s4,10);
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
return 0;
}
