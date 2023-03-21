#include <iostream>

#define SUM(x, y)	x + y	// 매크로함수
#define SQLARE(x)	x * x
#define SQLARE1(x)	(x) * (x)


void func()
{
	
}

int main()
{
	std::cout << SUM(10.1, 20.2) << std::endl;
	//func();
	std::cout << SQLARE(10) << std::endl;
	std::cout << SQLARE(10 + 1) << std::endl;		// 10 + 1 * 10 + 1

	std::cout << SQLARE1(10 + 1) << std::endl;		// (10 + 1) * (10 + 1) = 121


	return 0;
}