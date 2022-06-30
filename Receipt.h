//Receipt.h
#pragma once
#include <iostream>
#include <string>
using namespace std;

class Receipt {
private:
	int m_sum = 0;
	int m_last, m_current;
	int m_delta;
	Receipt(int, int);
public:
	void Calculate();
	void printReceipt();
	//void AddReceipt(int last, int current);
	friend class Customer;
};