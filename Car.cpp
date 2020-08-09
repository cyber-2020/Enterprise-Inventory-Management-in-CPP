#include <string>
#include <sstream>
#include "Car.h"
using namespace std;



Car::Car(const Car& theOtherObject)
{
	cout << "Car copy constructor is running!!!";
}

Car::Car(string vin, string m, string md,int y)
{
	//(*this).vin = vin;

	this->vin = vin;
	make = m;
	model = md;
	year = y;
}

Car::~Car()
{
cout << "Car destructor is running!!!";
}

string Car::toString()
{
	int length = make.length();
	string tmpMake  = make;
	string tmpModel = model;

	for(int i=0; i<12-length; i++)
	{
		tmpMake = tmpMake + " ";
	}
	length = model.length();
	for(int i=0; i<20-length; i++)
	{
		tmpModel = tmpModel + " ";
	}
	stringstream out;
	out << year;
	return  out.str() + " " + tmpMake + " " + tmpModel + " "  + vin;

}

bool Car::equals(Car& otherObject)
{
	if( vin == otherObject.vin )
		return true;
	else
		return false;

}



bool Car::isValidVIN(string v)
{
    for (int i = 0; i < v.length(); i++)
    {
        v[i] = toupper (v[i]);
    } 

        if( (v.length()    == 17)     )
        {
            return true;
        }
        else
        {
            //cout << ("Invalid VIN: " + v + "!"));
            return false;
        }

}

string Car::getMake()
{
	return this->make;
}
	
string Car::getModel()
{
	return this->model;
}

string Car::getVIN()
{
	return this->vin;
}
	
int Car::getYear()
{
	return this->year;
}
	
void Car::setMake(string make)
{
	this->make = make;
}
	
void Car::setModel(string model)
{
	this->model = model;
}
	 
void Car::setVIN(string vin)
{
	this->vin = vin;
}

void Car::setYear(int year)
{
	this->year = year;
}
