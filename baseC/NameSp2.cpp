#include <iostream>

namespace AAA
{
	int num = 2;
	namespace BBB
	{
		int num = 3;
	}
	namespace CCC
	{
		int num = 4;
	}
}

int main()
{
	std::cout << AAA::num << std::endl;
	std::cout << AAA::BBB::num << std::endl;
	std::cout << AAA::CCC::num << std::endl;

	return 0;
}