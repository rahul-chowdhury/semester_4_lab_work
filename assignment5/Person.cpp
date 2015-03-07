#include<iostream>
#include<string.h>
#include"Person.h"
using namespace std;
Person::Person():age(0)
{
	name=new char[100];
	strcpy(name,"");
	gender=new char[100];
	strcpy(gender,"");
}

Person::~Person()
{
	delete name;
	delete gender;
}

Person::Person(const char *n,const int & a,const char *g):age(a)
{
	name=new char[strlen(n)+1];
	strcpy(name,n);
	gender=new char[strlen(g)+1];
	strcpy(name,g);
}

Person::Person(Person & p):age(p.age)
{
	name=new char[strlen(p.name)+1];
	strcpy(name,p.name);
	gender=new char[strlen(p.gender)+1];
	strcpy(name,p.gender);
}

Person & Person::operator = (const Person & p)
{
	if(this==&p)
		return *this;
	age=p.age;
	name=new char[strlen(p.name)+1];
	strcpy(name,p.name);
	gender=new char[strlen(p.gender)+1];
	strcpy(name,p.gender);

}


void Person::read()
{
	
	cout<<"enter the name : ";
	cin>>name;
	cout<<"enter the age : ";
	cin>>age;
	cout<<"enter the gender : ";
	cin>>gender;
}
void Person::write()
{
	cout<<"name : "<<name<<endl;
	cout<<"age : "<<age<<endl;
	cout<<"gender : "<<gender<<endl;
}




//student

Student::Student():year(0)
{
	dept=new char[100];
	strcpy(dept,"");
}


Student::~Student()
{
	delete dept;
}
Student::Student(const char *n,const int & a,const char *g,const char *d,const int & y):Person(n,a,g),year(y)
{
	dept=new char[strlen(d)+1];
	strcpy(dept,d);
}

Student::Student(Student & s):year(s.year)
{
	//Person::Person(s);
	dept=new char[strlen(s.dept)+1];
	strcpy(dept,s.dept);
}

Student & Student::operator = (const Student & s)
{
	Person::operator = (s);
	if(this==&s)
		return *this;
	year=s.year;
	dept=new char[strlen(s.dept)+1];
	strcpy(dept,s.dept);

}


void Student::read()
{	
	cout<<"****read student data*****"<<endl;
	Person::read();
	cout<<"enter the year : ";
	cin>>year;
	cout<<"enter the dept : ";
	cin>>dept;
}
void Student::write()
{
	cout<<"****print student data*****"<<endl;
	Person::write();
	cout<<"year : "<<year<<endl;
	cout<<"department : "<<dept<<endl;
}


//professor


Professor::Professor():salary(0),courseload(0)
{
dept=new char[100];
	strcpy(dept,"");

}

Professor::~Professor()
{
	delete dept;
}

Professor::Professor(const char *n,const int & a,const char *g,const char *d,const int & c,const int & s):Person(n,a,g),salary(s),courseload(c)
{
	dept=new char[strlen(d)+1];
	strcpy(dept,d);

}

Professor::Professor(Professor & p):salary(p.salary),courseload(p.courseload)
{
//Person::Person(p);
dept=new char[strlen(p.dept)+1];
	strcpy(dept,p.dept);
}

Professor & Professor::operator = (const Professor & p)
{
	Person::operator = (p);
	if(this==&p)
		return *this;
	salary=p.salary;
	courseload=p.courseload;
	dept=new char[strlen(p.dept)+1];
	strcpy(dept,p.dept);

}


void Professor::read()
{cout<<"****read professor data*****"<<endl;
	Person::read();
	cout<<"enter the salary : ";
	cin>>salary;
	cout<<"enter the courseload : ";
	cin>>courseload;
	cout<<"enter the dept : ";
	cin>>dept;
}
void Professor::write()
{
cout<<"****print professor data*****"<<endl;
	Person::write();
	cout<<"salary : "<<salary<<endl;
	cout<<"courseload : "<<courseload<<endl;
	cout<<"department : "<<dept<<endl;
}



//clerk

Clerk::Clerk():salary(0),workload(0)
{}

Clerk::~Clerk()
{}

Clerk::Clerk(const char *n,const int & a,const char *g,const int & w,const int & s):Person(n,a,g),salary(s),workload(w)
{}

Clerk::Clerk(Clerk & c):salary(c.salary),workload(c.workload)
{
	//Person::Person(c);
}

Clerk & Clerk::operator = (const Clerk & c)
{
	Person::operator = (c);
	if(this==&c)
		return *this;
	salary=c.salary;
	workload=c.workload;

}


void Clerk::read()
{cout<<"****read clerk data*****"<<endl;
	Person::read();
	cout<<"enter the salary : ";
	cin>>salary;
	cout<<"enter the workload : ";
	cin>>workload;
}
void Clerk::write()
{
	cout<<"****print clerk data*****"<<endl;
	Person::write();
	cout<<"salary : "<<salary<<endl;
	cout<<"workload : "<<workload<<endl;
}



