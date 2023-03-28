#include<iostream>
using namespace std;

int simObjCnt = 0;
int cmxObjCnt = 0;

class SoSimple
{
public:
	SoSimple()
	{
		simObjCnt++;
		cout << simObjCnt << "번째 SoSimple 객체" << endl;
	}
};

class SoComplex
{
public:
	SoComplex()
	{
		cmxObjCnt++;
		cout << cmxObjCnt << "번째 SoComplex 객체" << endl;
	}
	SoComplex(SoComplex& copy)
	{
		cmxObjCnt++;
		cout << cmxObjCnt << "번째 SoComplex 객체" << endl;
	}
};

int main(void)
{
	SoSimple sim1;
	SoSimple sim2;

	SoSimple com1;
	SoSimple com2 = com1;
	SoComplex();
	return 0;
}


