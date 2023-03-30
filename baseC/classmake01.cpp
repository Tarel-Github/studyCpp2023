#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;


class Person {
private:
	char name[30];
	int birthday;
public:
	Person(const char * a, int b = 0){strcpy(name, a);}
	void showPerson() {	cout << name << birthday << endl; }
};

int main() {
	Person p1("홍길동", 19990909);
	p1.showPerson();
	Person p2(p1);
	p2.showPerson();

	return 0;
}