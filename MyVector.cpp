#include "MyVector.h"

MyVector::MyVector()
{
	numberOfCurrentRecords = 0;
	databaseCapacity = 2;
	data = new Car*[databaseCapacity];
}

MyVector::MyVector(int size)
{
	data = new Car*[size];
}

int MyVector::size()
{
	return this.numberOfCurrentRecords;
}

Car* MyVector::get(int index)
{
	return data[index];
}


void MyVector::push_back(string vin, string make, string model,int year)
{
	if((numberOfCurrentRecords >= databaseCapacity))
	{
		Car* *expansionArray;
		expansionArray = new Car*[databaseCapacity];

		for(int i=0; i<numberOfCurrentRecords;i++)
		{
			expansionArray[i]=data[i];
		}
		
		for(int i=0; i<numberOfCurrentRecords;i++)
		{
			delete data[i];
		}

		databaseCapacity *=2;
		data = new Car*[databaseCapacity];

		for(int i=0; i<numberOfCurrentRecords;i++)
		{
			data[i]=expansionArray[i];
		}
		
		for(int i=0; i<numberOfCurrentRecords;i++)
		{
			delete expansionArray[i];
		}
		delete [] expansionArray;

		data[numberOfCurrentRecords] = new Car(vin,make,model,year);
		numberOfCurrentRecords++;
	}
}

void MyVector::erase(int index)
{
	delete data[index];

	for(int i=index; i<(numberOfCurrentRecords-1); i++)
	{
		data[i]=data[i+1];
	}
	
	delete data[numberOfCurrentRecords-1];
	data[numberOfCurrentRecords-1] = NULL;
	numberOfCurrentRecords--;
}

MyVector::~MyVector()
{
	for(int i=0; i<numberOfCurrentRecords;i++)
	{
		delete data[i];
	}
	delete [] data;
	cout << "MyVector destructor is running!!!";
}