#include <iostream>

void func()
{
	//std::cout << "func()" << std::endl;
	printf("func()\n");
}


void func(int a)
{
	//std::cout << "func(a)" << std::endl;
	printf("func(a)\n");

}

void func(int a, int b)
{
	//std::cout << "func(a)" << std::endl;
	printf("func(a, b)\n");
}

void func(char a)
{
	//std::cout << "func(a)" << std::endl;
	printf("func(char)\n");
}


// 함수들은 이름이 같아도 파라미터의 타입이나 수가 다르면 다른 함수로 취급한다. 그러나 출력값의 타입은 함수구분 조건이 아니다.
int main()
{
	int n = 10, n1 = 12;
	char ch = 'a';
	func();
	func(n);
	func(n, n1);
	func(ch);
	return 0;
}

