#include<iostream>
using namespace std;
class Student
{
public:
void PrintStudentData()
{
cout<<"name : "<<this->name<<endl;
}
void ReadStudentData()
{
cout<<"enter name : ";
cin>>this->name;
}

int year,age;
char name[100],department[10];

};

int main()
{
Student s;
s.ReadStudentData();
s.PrintStudentData();
return 0;
}
