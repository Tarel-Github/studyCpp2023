#include<iostream>


class StaticTest {
private:
	static int a;							// 멤버변수의 static, class의 것으로 객체의 별로 소유하는 것이 아니다.
	int b;
public:
	StaticTest();
	static void setData(int aa);			// 멤버함수의 static
	void print();
};
int StaticTest::a = 10;						// static 멤버변수
StaticTest::StaticTest()
{
	this->b = 20;							//객체 자신이 가지고 있는 변수 b에다가 20을 대입
}

void StaticTest::setData(int aa)			// 객체
{
	//this->a = 30;							// 에러! this는 static에 사용할 수 없음, 객체에만 this를 사용할 수 있다.
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