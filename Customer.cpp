#include "Customer.h"

Customer::Customer(string Name, string Address, int MeterCode, int Current) :m_name(Name), m_address(Address), m_meterCode(MeterCode) 
{
	AddReceipt(Current, Current);
};


//void Customer::Add(string Name, string Address, int MeterCode, int Current)
//{
//	listCustom.push_back(Customer(Name, Address, MeterCode, Current));
//}

void Customer::AddReceipt(int last, int current)
{
	if (last > current) cout << "Invalid meter number!\n";
	else m_listReceipt.push_back(Receipt(last, current));
};
void Customer::printReceipt()
{
	m_listReceipt[m_listReceipt.size() - 1].printReceipt();
};
//Customer* Customer::Find(int ID)
//{
//	for (int i = 0; i < listCustom.size(); i++)
//	{
//		if (listCustom[i].m_meterCode == ID)
//		{
//			return &listCustom[i];
//		}
//	}
//	return nullptr;
//};

int Customer::getLastMterNum() const
{
	return m_listReceipt[m_listReceipt.size() - 1].m_current;
};

void Customer::printInfor()
{
	cout << "\nCustom Information:";
	cout << "\nMeter ID: " << m_meterCode;
	cout << "\nName: " << m_name;
	cout << "\nAddress: " << m_address;
};