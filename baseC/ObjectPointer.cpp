#include<iostream>
using namespace std;

class Person
{
public:
	void personf() { cout << "Sleep" << endl; }
};

class Student : public Person
{
public:
	void studentf() { cout << "Study" << endl; }
};

class PartTimeStudent : public Student
{
public:
	void ptstudentf() { cout << "Work" << endl; }
};

int main(void)
{
	Person* ptr1 = new Student();				// 부모 클래스 포인터
	Person* ptr2 = new PartTimeStudent();		// 부모 클래스 포인터가 PartTimeStudent() 클래스(자식의 자식)을 가리키고 있음
	Student* ptr3 = new PartTimeStudent();		// 학생 클래스가 PartTimeStudent() 클래스(자식)을 가리키고 있음

 	ptr1->personf();								// Person 클래스 포인터가 Person 클래스에 포함된 함수를 가리킴
	//ptr1->studentf();								// Person 클래스 포인터가 Student 클래스의 함수를 가리킴 (에러!!) 상속 받은 것만 가리킬 수 있음
	ptr2->personf();	
	//ptr2 -> ptstudentf();							// student 클래스 포인터가 PartTimeStudent 클래스의 함수를 가리킴 (에러!!!)
	ptr3->studentf();
	ptr3->personf();								// student 타입의 포인터가 Person 클래스의 함수에 접근할 수 있다. 왜냐하면 Student클래스는 이미 Person의 것을 다 상속 받았기 때문

	PartTimeStudent* ptr = new PartTimeStudent();
	ptr->personf();
	ptr->ptstudentf();
	ptr->studentf();			// 전부 상속받은 것이기에 에러 없음

	Person* ptr4 = new PartTimeStudent();
	ptr4->personf();
	//ptr4->ptstudentf();		//
	//ptr4->studentf();			// 에러! 상속받은 것이 아니다! 


	delete ptr1; delete ptr2; delete ptr3;
	return 0;
}