#include <iostream>
#include "Inventory.h"
using namespace std;



// type functionName(parameters)




void main()
{
	Inventory *carmax = new Inventory();
	if(Car::isValidVIN("3A8FY48B98T147763"))
	carmax->addRecord(new Car*("3A8FY48B98T147763", 2008, "Chrysler", "PT Cruiser"));

	if(Car::isValidVIN("2T1BR32E75C457411"))
	carmax->addRecord(new Car*("2T1BR32E75C457411", 2005, "Toyota", "Corolla"))

	if(Car::isValidVIN("1HGFA16598L052415"))
	carmax->addRecord(new Car*("1HGFA16598L052415", 2008, "Honda", "Civic"))
	
	carmax->showRecords();
	cout << "SUBLIST HONDA:" << endl;
	carmax->showRecords(2008,"Civic");

	delete carmax;

	system("pause");
}
