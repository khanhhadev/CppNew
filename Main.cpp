#include "Customer.h"
#include <vector>

vector<Customer> ListCustom;

Customer* Find(int ID)
{
	for (int i = 0; i < ListCustom.size(); i++)
	{
		if (ListCustom[i].getMeterCode() == ID)
		{
			return &ListCustom[i];
		}
	}
	return nullptr;
};

int main()
{
	while (true)
	{
		int number;
		cout << "\n\nEnter number of function that you want to choose:\n1. Add new customer\n2. Add new receipt\n0. End program\nFunction: "; cin >> number;
		Customer* CustomNow = nullptr;
		int ID;
		string name, address;
		int current;
		switch (number)
		{
			case 1:
			{
				do
				{
					cout << "\nEnter meter ID: "; cin >> ID;
				} while (ID < 0);
				CustomNow = Find(ID);
				if (CustomNow != nullptr)
				{
					cout << "\nMeter ID exists!";
					CustomNow->printInfor();
				}
				else
				{
					cin.ignore();
					cout << "\nEnter customer's name: "; getline(cin, name);
					cout << "Enter customer's address: "; getline(cin, address);
					do
					{
						cout << "Enter current meter number: "; cin >> current;
					} while (current < 0);
					//Customer::Add(name, address, ID, current);
					ListCustom.push_back(Customer(name, address, ID, current));
					cout << "New customer was added.";
				}
			}
				break;
			case 2:
			{
				int ID; int current;
				do
				{
					cout << "\nEnter meter ID: "; cin >> ID;
				} while (ID < 0);
				Customer* CustomNow = Find(ID);
				if (CustomNow == nullptr) cout << "\nMeter ID doesn't exist!";
				else
				{
					cin.ignore();
					do
					{
						cout << "Enter current meter number: "; cin >> current;
					} while (current < 0);
					CustomNow->printInfor();
					CustomNow->AddReceipt(CustomNow->getLastMterNum(), current);
					CustomNow->printReceipt();
				}
			}
				break;
			case 0:
			{
				return 0; 
			}
				break;
			default:
			{
				cout << "Invalid input";
			}
				break;
		}
		cout << "\n";
	}
	return 0;
}