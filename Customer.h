//Customer.h
#pragma once
#include "Receipt.h"
#include <vector>

class Customer {
private:
	string m_name, m_address;
	int m_meterCode;
	vector<Receipt> m_listReceipt;
	
public:
	static int count;
	//static Customer* Find(int ID);
	Customer(string Name, string Address, int MeterCode, int Current);
	//static void Add(string Name, string Address, int MeterCode, int Current);
	int getLastMterNum() const;
	int getMeterCode() { return m_meterCode; };
	void AddReceipt(int last, int current);
	
	void printInfor();
	void printReceipt();

	//static vector<Customer> listCustom;
};
//Customer::static vector<Customer> listCustom;