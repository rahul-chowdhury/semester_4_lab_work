#include<iostream>
#include<string.h>
#include"Vehicle.h"
using namespace std;
int main()
{
	cout<<" a vehicle created"<<endl;
	Vehicle a;
	a.read();
	a.write();
	cout<<" a car created"<<endl;
	Car c;
	c.read();
	c.write();
	Vehicle *v=new Car();
	
	return 0;
}
