#include<iostream>
using namespace std;
template<typename T>
T add( T &a, T &b)
{
	return a+b;
}

int main()
{
	int type=0;

	cout<<"enter the type of the numbers you want to add: enter 1 for int\tenter 2 for float\tenter 3 for short\tenter 4 for double\nenter your choice: ";
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
			cout<<"The sum is "<<add(a,b)<<endl;
			break;
		}
		case 2:
		{
			float a,b;
			cout<<"enter first number: ";
			cin>>a;
			cout<<"enter second number: ";
			cin>>b;
			cout<<"The sum is "<<add(a,b)<<endl;
			break;
		}
		case 3:
		{
			short a,b;
			cout<<"enter first number: ";
			cin>>a;
			cout<<"enter second number: ";
			cin>>b;
			cout<<"The sum is "<<add(a,b)<<endl;
			break;
		}
		case 4:
		{
			double a,b;
			cout<<"enter first number: ";
			cin>>a;
			cout<<"enter second number: ";
			cin>>b;
			cout<<"The sum is "<<add(a,b)<<endl;
			break;
		}
		default:cout<<"wrong choice!!"<<endl;
	}
	
	return 0;
}		


