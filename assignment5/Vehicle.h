class Vehicle
{
private:
int price;
char *manufacturer;
public:
Vehicle();
Vehicle(const int &,const char *);
Vehicle(Vehicle &);
Vehicle & operator = (const Vehicle &);
void read();
void write();
};

class Car:public Vehicle
{
private:
int num_of_seats;
char *colour,*model;
public:
Car();
Car(const  int & ,const char [],const int &,const char *,const char *);
Car(Car &);
Car & operator = (const Car &);
void read();
void write();
};
