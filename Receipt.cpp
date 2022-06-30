#include "Receipt.h"

Receipt::Receipt(int last, int current):m_last(last),m_current(current)
{
};
void Receipt::Calculate()
{
	m_delta = m_current - m_last;
	if (m_delta <= 50) m_sum = m_delta * 1250;
	else if (m_delta <= 100) m_sum = (m_delta - 50) * 1500 + 50 * 1250;
	else m_sum = (m_delta - 100) * 2000 + 50 * 1500 + 50 * 1250;
}

void Receipt::printReceipt()
{
	Calculate();
	cout << "\nReceipt Information:";
	cout << "\nLast meter number: " << m_last;
	cout << "\nCurrent meter number: " << m_current;
	cout << "\nTotal: " << m_sum;
};


//
//void Receipt::AddReceipt(int last, int current)
//{
//	if (last < current) cout << "Invalid information!\n";
//	else Receipt(last, current);
//};

