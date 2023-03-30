#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>
using namespace std;

class Person {
private:
	char name[30];
	int age;
public:
	Person(const char* aname, int aage) : age(aage)	// 생성자, 첫번째 파라미터는 private의 name에, 두번째는 age에 저장
	{
		strcpy(name, aname);
	}
	void getData() {
		cout << "사람 정보" << name << endl;
	}
};

class Student : public Person{
private:
	int studentId;
public:
	Student(const char* aname, int aage, int astudentId) :Person(aname, aage), studentId(astudentId) {};		// 생성자
	void getData() {
		cout << "학생 아이디: " << studentId << endl;
	}
};

class FirstGrade : public Student {
private:
	int major;
public:
	FirstGrade(const char* aname, int aage, int astudentId, int amajor) :Student(aname, aage, astudentId), major(amajor) {};
	void getData() {
		cout << "학생 전공과목 번호: " << major << endl;
	}

};

int main()
{
	Student st("이름", 15, 12);
	st.getData();
	FirstGrade F1("누군가", 10, 12, 1);
	F1.getData();

	return 0;
}