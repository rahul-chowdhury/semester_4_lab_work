#include<iostream>
using namespace std;
template<typename T>
T swap(const T &a,const T &b)
{
	a=a+b;
	b=a-b;
	a=a-b;
}
int main()
{
	int type=0;
	cout<<"enter the type of the numbers you want to swap: enter 1 for int\tenter 2 for float\tenter 3 for short\tenter 4 for double\nenter your choice: ";
	cin>>type;
	switch(type)
	{
		case 1:
		{
			int a,b;
			cout<<"enter first number: ";
			cin>>a;
			cout<<"enter second number: ";
			cin>>b;
			swap(a,b);
			cout<<"*********AFTER SWAPPING***********"<<endl;
			cout<<"first number is "<<a<<"\nsecond number is "<<b<<endl;
			break;
		}
		case 2:
		{
			float a,b;
			cout<<"enter first number: ";
			cin>>a;
			cout<<"enter second number: ";
			cin>>b;
			swap(a,b);
			cout<<"*********AFTER SWAPPING***********"<<endl;
			cout<<"first number is "<<a<<"\nsecond number is "<<b<<endl;
			break;
		}
		case 3:
		{
			short a,b;
			cout<<"enter first number: ";
			cin>>a;
			cout<<"enter second number: ";
			cin>>b;
			swap(a,b);
			cout<<"*********AFTER SWAPPING***********"<<endl;
			cout<<"first number is "<<a<<"\nsecond number is "<<b<<endl;
			break;
		}
		case 4:
		{
			double a,b;
			cout<<"enter first number: ";
			cin>>a;
			cout<<"enter second number: ";
			cin>>b;
			swap(a,b);
			cout<<"*********AFTER SWAPPING***********"<<endl;
			cout<<"first number is "<<a<<"\nsecond number is "<<b<<endl;
			break;
		}
		default:cout<<"wrong choice!!"<<endl;
	}
	
	return 0;
}		


