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
		cout << simObjCnt << "¹øÂ° SoSimple °´Ã¼" << endl;
	}
};

class SoComplex
{
public:
	SoComplex()
	{
		cmxObjCnt++;
		cout << cmxObjCnt << "¹øÂ° SoComplex °´Ã¼" << endl;
	}
	SoComplex(SoComplex& copy)
	{
		cmxObjCnt++;
		cout << cmxObjCnt << "¹øÂ° SoComplex °´Ã¼" << endl;
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


