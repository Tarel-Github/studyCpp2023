#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class CTest {
private:
	int num;
public:
	CTest(int n) {
		num = n;
		cout <<"CTest Constructor" << num << endl;
	}
	~CTest() {
		cout << "CTest Destructor" << endl;
	}
};
class CTestSub : public CTest {
private:
	int subn;
public:
	CTestSub(int sn, int n):CTest(sn) {
		subn = n;
		cout << "CTestSub Constructor" << subn << endl;
	}
	~CTestSub() {		// 서브 클래스 소멸자
		cout << "CTestSub Destructor" << endl;
	}
};
int main()
{
	CTest c1(10);
	CTestSub c2(1, 10);

	return 0;
}
