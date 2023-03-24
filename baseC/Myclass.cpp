#include<iostream>
using namespace std;

class Myclass 
{
private:
	char id;
	int age;
	char name[10];
	//멤버함수(=메소드): 기능
public:
	Myclass(char aid, int aage, const char* aname);		// 생성자 원형
	void getData();
};

Myclass::Myclass(char aid, int aage, const char* aname) : id(aid), age(aage)
{
	printf("생성자 호출\n");
	//id = aid;
	//age = aage;
	strcpy_s(name, 10, aname);
}

void Myclass::getData()
{
	cout << id << ' ' << name << ' ' << age << endl;
}

int main(void) {
	Myclass M("aaa", 11);
}