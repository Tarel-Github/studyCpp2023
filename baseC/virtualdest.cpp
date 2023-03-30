#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class CTest {
private:
	int num;
public:
	CTest(int n) : num(n) {
		cout << "CTest 생성자" << num << endl;
	}
	virtual ~CTest(){
		cout << "CTest 소멸자" << endl;
	}
	void func() {
		cout << "CTest func()" << endl;
	}
	virtual void vfunc() {				// 가상함수
		cout << "CTest vfunc()" << endl;
	}
};
class CTestSub : public CTest{
private:
	int snum;
public:
	CTestSub(int n1, int n2) : CTest(n1), snum(n2) {
		cout << "CTestSub 생성자" << snum << endl;
	}
	~CTestSub() {
		cout << "CTestSub 소멸자" << endl;
	}
	void vfunc() {
		cout << "CTestSub func()" << endl;
	}
};

int main()
{
	//CTest c1(10);
	//cout << "===========================" << endl;
	//CTestSub c2(1, 10);
	//cout << "===========================" << endl;
	CTest* ps = new CTestSub(3, 33);

	delete ps;
	return 0;
}