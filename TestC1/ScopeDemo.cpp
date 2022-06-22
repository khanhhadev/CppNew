#include <iostream>

static int a = 4;
class VD{
public:
	static int count;

	VD()
	{
		count++;
	}
};

int VD::count = 0;

int main()
{
	VD A;
	std::cout << VD::count << std::endl;
	VD B;
	std::cout << A.count << std::endl;
	//std::cout << a << std::endl;
}