#include <iostream>

int Adder(int num1 = 1, int num2 = 2);		// Adder �Լ��� �����, �Լ��� �⺻���� ����Ǿ� �ִ�.

int main(void)
{
	std::cout << Adder() << std::endl;
	std::cout << Adder(5) << std::endl;
	std::cout << Adder(3, 5) << std::endl;
	return 0;
}

int Adder(int num1, int num2)				// Adder �Լ��� ���Ǻ�, �Լ��� �⺻���� ����.
{
	return num1 + num2;
}

// �Լ��� �⺻���� �Լ��� ����ο� ��ġ�ؾ� �Ѵ�.
// ����Ʈ ���� �ݵ�� �����ʺ��� ä����� �Ѵ�. ��, �Ʒ��� ���� ���� �Ұ��� �ϴ�.
// int A(int num = 1, int num2){...}
