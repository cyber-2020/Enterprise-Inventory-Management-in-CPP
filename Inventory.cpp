#include "Inventory.h"

Inventory::Inventory()
{
	list = new MyVector;
}

Inventory::~Inventory()
{
	cout << "Inventory destructor is running!!!" << endl;
	delete list;
}

bool Inventory::isExist(string vin)
{
	if ((list->size())>0)
        {
            for(int i=0; i<(list->size()); i++)
            {
                if(list->get(i)->getVIN().equals(vin))
                {
                    return true;
                }
            }
        }
        else
        {
            return false;
        }
        return false;
}
	
void Inventory::addRecord(Car* record)
{
	if ( (list->size())<20)
        {
            bool found = false;
            for(int i=0; i<list->size(); i++)
            {
                if( list->get(i)->equals(record) )
                {
                    found = true;
                }
            }

            if( !found && ((record->getYear())>1980))
            {
                // VIN Check
                list->push_back(record);                

            }
            else if (found)
            {
                cout << "Existing Record: record not added!" << endl;
            }
        }
        else
        {
            cout << "Inventory Full!" << endl;
        }
}
	
void Inventory::removeRecord(string vin)
{
	if ((list->size())>0)
        {
            if( isExist(vin))
            {

                for(int i=0; i<(list->size()); i++)
                {
                    if( (list->get(i)->getVIN()).equals(vin) )
                    {
                        list->erase(i);
                        cout << "Car removed successfully!" << endl;
                        break;
                    }
                }
            }
        }
        else
        {
          cout << "No record in the inventory!" << endl;
        }
}
	
void Inventory::showRecords()
{
	if ((list->size())>0 )
        {
            for(int i=0; i<(list->size()); i++)
            {
                cout << *(list->get(i)) << endl;
            }
        }
        else
        {
          cout << "No record in the inventory!" << endl;
        }
}
	
void Inventory::showRecords(int year, string model)
{
	if ((list->size())>0 )
        {
            for(int i=0; i<(list->size()); i++)
            {
                if( ((list->get(i)->getYear())==year) && ((list->get(i)->getModel()).equals(model) ) )
                {
                    cout << *(list->get(i)) << endl;
                }
            }
        }
        else
        {
          cout << "No record in the inventory!" << endl;
        }
}