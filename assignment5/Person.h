class Person
{
private:
	int age;
	char *name,*gender;
public:
	Person();
	~Person();
	Person(const char *,const int &,const char *);
	Person(Person &);
	Person & operator = (const Person &);
	virtual void read();
	virtual void write();
};


//student class
class Student:public Person
{
	private:
		int year;
		char *dept;
	public:
		Student();
		~Student();
		Student(const char *,const int &,const char *,const char *,const int & );
		Student(Student &);
		Student & operator = (const Student &);
		void read();
		void write();
};

class Professor:public Person
{
	private:
		int salary,courseload;
		char *dept;
	public:
		Professor();
		~Professor();
		Professor(const char *,const int &,const char *,const char *,const int &,const int &);
		Professor(Professor &);
		Professor & operator = (const Professor &);
		void read();
		void write();

};


class Clerk:public Person
{
private:
	int salary,workload;
public:
	Clerk();
	~Clerk();
	Clerk(const char * ,const int & ,const char * ,const int & ,const int & );
	Clerk(Clerk &);
	Clerk & operator = (const Clerk &);
	void read();
	void write();
};




