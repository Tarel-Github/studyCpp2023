#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class First { public: virtual void SimpleFunc() { cout << "First" << endl; } };
class Second { public: virtual void SimpleFunc() { cout << "Second" << endl; } };

int main(void)
{
	First * ptr = new First();
	ptr->SimpleFunc();
	delete ptr;

	ptr = new Second();
	ptr->SimpleFunc();
	delete ptr;
	return 0;
						 
}
