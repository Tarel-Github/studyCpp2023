#include <iostream>
#include <cstring> // for strcpy()
using namespace std;

class Myclass {
private:
	char id;
	int age;
	char name[10];
public:
	Myclass(char aid, int aage, const char* aname);
	void getData();
};

Myclass::Myclass(char aid, int aage, const char* aname) : id(aid), age(aage) {
	printf("생성자 호출\n");
	strcpy_s(name, 10, aname);
}

void Myclass::getData()
{
	cout << id << ' ' << name << ' ' << age << endl;
}

int main()
{
	Myclass s('2', 23, "홍길동");
	s.getData();
	return 0;
}