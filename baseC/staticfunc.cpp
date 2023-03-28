#include<iostream>


class StaticTest {
private:
	static int a;							// ��������� static, class�� ������ ��ü�� ���� �����ϴ� ���� �ƴϴ�.
	int b;
public:
	StaticTest();
	static void setData(int aa);			// ����Լ��� static
	void print();
};
int StaticTest::a = 10;						// static �������
StaticTest::StaticTest()
{
	this->b = 20;							//��ü �ڽ��� ������ �ִ� ���� b���ٰ� 20�� ����
}

void StaticTest::setData(int aa)			// ��ü
{
	//this->a = 30;							// ����! this�� static�� ����� �� ����, ��ü���� this�� ����� �� �ִ�.
	a = aa;
}

void StaticTest::print()
{
	std::cout << "a:: " << a << "' " << "b: " << b << std::endl;
}

int main()
{
	StaticTest s1, s2;
	s1.print();
	s2.print();

	s1.setData(30);
	s1.print();
	s2.print();

	StaticTest::setData(100);
	s1.print();
	s2.print();
	return 0;
}