#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

// 동적 할당
class Person {
private:
	char name[30];
	int birthday;
public:
	Person(const char* a, int b = 0) { strcpy(name, a); }
	void showPerson() { cout << name << birthday << endl; }
	~Person() { cout << "메모리 해제" << endl; }
};

int main() {
    Person * p = new Person ("홍길동", 1990);
	p->showPerson();


	delete p;

	return 0;
}



