#include <iostream>

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int res;
//	res = 10 + 20;
//	std::cout << "res : " << res << std::endl;
//
//	return 0;
//}

/*
void func()
{
	int a = 10;
	int b = 20;
	int res;
	res = a + b;
	std::cout << "res : " << res << std::endl;
}

int main()
{
	func();			// 함수호출
	return 0;
}
*/

void func(int a, int b)
{
	int res;
	res = a + b;
	std::cout << "res : " << res << std::endl;
}


int main()
{
	func(10, 20);			// 함수호출
	return 0;
}
