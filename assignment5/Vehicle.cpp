#include<iostream>
#include<string.h>
#include"Vehicle.h"
using namespace std;
Vehicle::Vehicle():price(0)
{
	manufacturer=new char[100];
	strcpy(manufacturer,"");
}

Vehicle::Vehicle(const int &a,const char *s):price(a)
{
	manufacturer=new char[strlen(s)+1];
	strcpy(manufacturer,s);
}

Vehicle::Vehicle(Vehicle & v):price(v.price)
{
	manufacturer=new char[strlen(v.manufacturer)+1];
	strcpy(manufacturer,v.manufacturer);
}

Vehicle & Vehicle::operator = (const Vehicle & v)
{
	if(this==&v)
		return *this;
	price=v.price;
	manufacturer=new char[strlen(v.manufacturer)+1];
	strcpy(manufacturer,v.manufacturer);

}


void Vehicle::read()
{
	
	cout<<"enter the price : ";
	cin>>price;
	cout<<"enter the manufacturer : ";
	cin>>manufacturer;
}
void Vehicle::write()
{	
	
	cout<<"price : "<<price<<endl;
	cout<<"manufacturer : "<<manufacturer<<endl;
}


Car::Car():num_of_seats(0)
{
	colour=new char[100];
	strcpy(colour,"");
	model=new char[100];
	strcpy(model,"");
}

Car::Car(const int &b,const char *s,const int & a,const char *s1,const char *s2):Vehicle::Vehicle(b,s)
{
	num_of_seats=a;
	colour=new char[strlen(s1)+1];
	strcpy(colour,s1);
	model=new char[strlen(s2)+1];
	strcpy(model,s2);
}

Car::Car(Car & c):num_of_seats(c.num_of_seats)
{
	colour=new char[strlen(c.colour)+1];
	strcpy(colour,c.colour);
	model=new char[strlen(c.model)+1];
	strcpy(model,c.model);
}

Car & Car::operator = (const Car & c)
{
	Vehicle::operator = (c);
	if(this==&c)
		return *this;
	num_of_seats=c.num_of_seats;
	colour=new char[strlen(c.colour)+1];
	strcpy(colour,c.colour);
	model=new char[strlen(c.model)+1];
	strcpy(model,c.model);

}


void Car::read()
{
	Vehicle::read();
	cout<<"enter the number of seats : ";
	cin>>num_of_seats;
	cout<<"enter the colour : ";
	cin>>colour;
	cout<<"enter the model : ";
	cin>>model;
	
}
void Car::write()
{
	Vehicle::write();
	cout<<"number of seats : "<<num_of_seats<<endl;
	cout<<"colour : "<<colour<<endl;
	cout<<"model : "<<model<<endl;
}























