#include <iostream>
#include <string>
using namespace std;

class Car
{
private:
	string vin;
	string make;
	string model;
	int    year;
public:
	Car(const Car& theOtherObject);
	Car(string vin, string make, string model,int year);
	Car();
	~Car();

	string toString();
	bool equals(Car& otherObject);
	static bool isValidVIN(string vin);
	string getMake();
	string getModel();
	string getVIN();
	int getYear();
	void string setMake(string make);
	void string setModel(string model);
	void strign setVIN(string vin);
	void setYear(int year);
};
