#include<iostream>
using namespace std;
struct student
{
	char name[100];
	int age;
	char department[100];
	int year;
};
void ReadStudentData(struct student *,int);
void PrintStudentData(struct student *,int);
int main()
{
	int N=0;
	cout<<"enter the number of students: ";
	cin>>N;
	struct student database[N];
	ReadStudentData(database,N);
	PrintStudentData(database,N);
	return 0;
}	
void ReadStudentData(struct student *database,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
	cout<<"enter the name of student "<<(i+1)<< ": ";
	cin>>database[i].name;
	cout<<"enter the age of student "<<(i+1)<< ": ";
	cin>>database[i].age;
	cout<<"enter the department of student "<<(i+1)<< ": ";
	cin>>database[i].department;
	cout<<"enter the year of student "<<(i+1)<< ": ";
	cin>>database[i].year;
	cout<<endl;
	}
}
void PrintStudentData(struct student *database,int n)
{
	int i;
	cout<<"		DATABASE		\nNAME	AGE	DEPARTMENT	YEAR"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<database[i].name<<"	";
		cout<<database[i].age<<"	";
		cout<<database[i].department<<"		";
		cout<<database[i].year<<"	"<<endl;
		
	}	
}
























	
	
