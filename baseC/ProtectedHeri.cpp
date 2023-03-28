#include <iostream>
using namespace std;

class Base
{
private:
	int num1;
protected:
	int num2;
public:
	int num3;

	Base() : num1(1), num2(2), num3(3) {}
};

class Derived : protected Base {};	//비우기

int main(void) {
	Derived drv;
	//cout << drv.num3 << endl;			// 컴파일 에러! num3는 public이지만 Derived가 protected이기 때문에 가져올 수 없다!!
	return 0;
}
