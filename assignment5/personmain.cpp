#include<iostream>
#include<string.h>
#include"Person.h"
using namespace std;
int main()
{
	Person *p[3];
	p[0]=new Student();
	p[1]=new Professor();
	p[2]=new Clerk();
	cout<<".....reading data..........."<<endl;
	for(int i=0;i<3;i++)
		p[i]->read();
	cout<<".....printing data..........."<<endl;
	for(int i=0;i<3;i++)
		p[i]->write();
	return 0;
}
