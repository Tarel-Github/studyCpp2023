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


// �Լ����� �̸��� ���Ƶ� �Ķ������ Ÿ���̳� ���� �ٸ��� �ٸ� �Լ��� ����Ѵ�. �׷��� ��°��� Ÿ���� �Լ����� ������ �ƴϴ�.
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

