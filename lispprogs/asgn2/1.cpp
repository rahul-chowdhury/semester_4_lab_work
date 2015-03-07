#include<iostream>
using namespace std;
struct student
{
	char name[100];
	int age;
	char department[100];
	int year;
};
int current=0;
void ReadStudentData(struct student & );
void PrintStudentData(struct student &);
int main()
{
	int N=0,check=1,n=0;
	cout<<"enter the number of students: ";
	cin>>N;
	struct student database[N];
while(check!=0)
{cout<<"enter 1 for entering student data ,2 for printing student data and 0 for exiting menu: ";
cin>>check;
if(check==1)
	ReadStudentData(database[current++]);
if(check==2)
{
cout<<"enter roll number of student : ";
cin>>n;
	PrintStudentData(database[n-1]);
}
}
	return 0;

}	
void ReadStudentData(struct student &database)
{
	cout<<"enter the name of student : ";
	cin>>database.name;
	cout<<"enter the age of student : ";
	cin>>database.age;
	cout<<"enter the department of student : ";
	cin>>database.department;
	cout<<"enter the year of student : ";
	cin>>database.year;
	cout<<endl;
}
void PrintStudentData(struct student &database)
{
	
	cout<<"		DATABASE		\nNAME	AGE	DEPARTMENT	YEAR"<<endl;
		cout<<database.name<<"	";
		cout<<database.age<<"	";
		cout<<database.department<<"		";
		cout<<database.year<<"	"<<endl;
		
}
























	
	
