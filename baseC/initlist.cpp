/*
콜론 초기화가 필요한 경우
1. 상수멤버 변수, 2. 객체멤버 변수, 3. 참조멤버 변수, 4. 멤버변수  // 여기서 1 ~ 3번은 필수, 4는 선택
*/
#include<iostream>
using namespace std;

// 상수멤버 변수가 사용된 경우
class ConstSome {
public:
	const int val;							// 상수멤버 변수
	ConstSome(int n) : val(n) {}			// 생성자, 클래스 이름과 동일
	void printval() {
		cout << val << endl;
	}
};

// 참조멤버 변수가 사용된경우
class RefSome {
public:
	int& ref;								// 참조멤버 변수
	RefSome(int n) : ref(n) {}
	void printval() {
		cout << ref << endl;
	}
};

// 아래 position과 ObjSome은 객체멤버 변수가 사용된 경우다.
class Position {
public:
	int x, y;
	Position(int ax, int ay) {
		x = ax;
		y = ay;
	}
};
class ObjSome {
public:
	Position pos;							// 객체멤버 변수
	ObjSome(int ax, int ay) : pos(ax, ay) {};
	void printfval() {
		cout << pos.x << " " << pos.y << endl;
	}
};

int main()
{
	ConstSome c(10);
	c.printval();
	
	int n = 20;
	RefSome r(n);
	r.printval();

	ObjSome o(10, 20);
	o.printfval();
	return 0;
}