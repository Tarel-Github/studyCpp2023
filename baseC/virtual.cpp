#include<iostream>
using namespace std;

class Super {
public:
	virtual void func1() { cout << "Super::func1()" << endl; }
	virtual void func2() { cout << "Super::func2()" << endl; }
	void func3() { cout << "Super::func3()" << endl; }
};

class Sub : public Super {			//Super를 상속받음
public:
	void func1() { cout << "Sub::func1()" << endl; }
	void func2() { cout << "Sub::func2()" << endl; }
	void func3() { cout << "Sub::func3()" << endl; }
	void func4() { cout << "Sub::func4()" << endl; }		//3은 없고 4가 있음
};

int main()
{
	Super super;
	Sub sub;
	Super* sptr = new Sub;

	sptr->func1();
	sptr->func2();
	sptr->func3();

	super.func1();
	super.func2();
	super.func3();

	sub.func4();	
	sub.func3();						// sub에 3은 없다. 고로 부모의 것을 가져온다.
	sub.func2();
	sub.func1();

	cout << endl;

	Super* ps = new Sub;

	ps->func3();
	ps->func1();		//func 1과 2는 버츄얼이다. 때문에 객체 위주로 출력이 된다.
	ps->func2();

	delete ps;

	return 0;
}