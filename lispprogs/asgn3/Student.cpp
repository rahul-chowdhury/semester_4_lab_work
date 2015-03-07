#include<iostream>
#include<string.h>
using namespace std;
class Student
{
	public:
	void PrintStudentData();
	void ReadStudentData();
	
	int year,age;
	char *name,*department;
	
};

void Student::PrintStudentData()
{
	
	cout<<"name : "<<name<<endl;
	cout<<"age : "<<age<<endl;
	cout<<"department : "<<department<<endl;
	cout<<"year : "<<year<<endl;
}
void Student::ReadStudentData()
{
	char temp[100];
	cout<<"enter name : ";
	cin>>temp;
	name=new char[strlen(temp)+1];
	strcpy(name,temp);
	cout<<"enter age : ";
	cin>>age;
	cout<<"enter department : ";
	cin>>temp;
	department=new char[strlen(temp)+1];
	strcpy(department,temp);
	cout<<"enter year : ";
	cin>>year;
}
int main()
{
	int n;
	cout<<"enter the number of students : ";
	cin>>n;
	Student s[n];
	cout<<"******taking student data as input******"<<endl;
	for(int i=0;i<n;i++)
		s[i].ReadStudentData();
	cout<<"******printing student data******"<<endl;
	for(int i=0;i<n;i++)
		s[i].PrintStudentData();
	return 0;
}
