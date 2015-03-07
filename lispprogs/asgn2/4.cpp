#include<iostream>
using namespace std;
template<typename T>
void swap2( T &a,T &b)
{
T temp;
temp=a;
a=b;
b=temp;
}
struct num
{
int i;
float j;
};
int main()
{
	int type=0;
	cout<<"enter the type of the numbers you want to swap: enter 1 for int\tenter 2 for float\tenter 3 for short\tenter 4 for double\tenter 5 for structure\nenter your choice: ";
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
			swap2(a,b);
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
			swap2(a,b);
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
			swap2(a,b);
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
			swap2(a,b);
			cout<<"*********AFTER SWAPPING***********"<<endl;
			cout<<"first number is "<<a<<"\nsecond number is "<<b<<endl;
			break;
		}
		case 5:
		{
struct num s1,s2;			
cout<<"enter integer value of first structure: ";
			cin>>s1.i;
cout<<"enter float value of first structure: ";
cin>>s1.j;
cout<<"enter integer value of second structure: ";
			cin>>s2.i;
cout<<"enter float value of second structure: ";
cin>>s2.j;
			swap2(s1,s2);
			cout<<"*********AFTER SWAPPING***********"<<endl;
cout<<"first structure:\n1.integer value = "<<s1.i<<"\n2.float value = "<<s1.j<<"\nsecond structure:\n1.integer value = "<<s2.i<<"\n2.float value = "<<s2.j<<endl;			
break;
		}
		default:cout<<"wrong choice!!"<<endl;
	}
	
	return 0;
}		


