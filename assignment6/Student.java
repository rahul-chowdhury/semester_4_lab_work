import java.io.*;
class Student
{
	int age,year;
	String name,dept;
	void ReadData()throws IOException
	{
		String temp;
		BufferedReader rd=new BufferedReader(new InputStreamReader(System.in));
		System.out.print("enter the age of the student : ");
		age=Integer.parseInt(rd.readLine());
		System.out.print("enter the name of the student : ");
		name=rd.readLine();
		System.out.print("enter the department of the student : ");
		dept=rd.readLine();
		System.out.print("enter the year of the student : ");
		year=Integer.parseInt(rd.readLine());
	}
	
	void write()
	{
		
};


