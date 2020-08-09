#include "Car.h"
class MyVector
{
private:
	Car* *data;
	int numberOfCurrentRecords;
	int databaseCapacity;

public:
	MyVector();
	MyVector(int size);
	~MyVector();
	int size();
	Car* get(int index);
	void push_back(string vin, string make, string model,int year);
	void erase(int index);
};