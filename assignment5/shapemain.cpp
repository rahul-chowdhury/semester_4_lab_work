#include<iostream>
#include"Shape.cpp"
using namespace std;
int main()
{
	double total_area=0;
	Shape *p[3];
	p[0]=new Rectangle();
	p[1]=new Triangle();
	p[2]=new Circle();
	cout<<".....reading data..........."<<endl;
	for(int i=0;i<3;i++)
		p[i]->read();
	for(int i=0;i<3;i++)
		total_area +=p[i]->area();
	cout<<"total area = "<<total_area<<endl;
	return 0;
}
