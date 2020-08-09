#include "MyVector.h"
class Inventory
{
private:
	MyVector *list;
	
public:
	Inventory();
	~Inventory();
	bool isExist(string vin);
	void addRecord(Car* record);
	void removeRecord(string vin);
	void showRecords();
	void showRecords(int year, string model);

};