#include <iostream>
#include <cstring> // for strcpy()
using namespace std;

//class SimpleClass
//{
//private:
//	int num1;
//	int num2;
//public:
//	SimpleClass()
//	{
//		num1 = 0;
//		num2 = 0;
//	}
//	SimpleClass(int n)
//	{
//		num1 = n;
//		num2 = 0;
//	}
//	SimpleClass(int n1, int n2)
//	{
//		num1 = n1;
//		num2 = n2;
//	}
//	void ShowData() const
//	{
//		cout << num1 << ' ' << num2 << endl;
//	}
//};
//
//int main(void)
//{
//	SimpleClass sc1;
//	sc1.ShowData();
//
//	SimpleClass sc2(100);
//	sc2.ShowData();
//
//	SimpleClass sc3(100, 200);
//	sc3.ShowData();
//	return 0;
//}

// 클래스 멤버변수에 접근할 수 있는 방법은 3가지로 표현된다. (은닉)
class Myclass {
	//멤버변수: 속성
private:
	char id;
	int age;
	char name[10];
	//멤버함수(=메소드): 기능
public:
	Myclass(char aid, int aage, const char* aname);					//생성자 원형
	void getData();					// 메소드 원형(선언)
};	

Myclass::Myclass(char aid, int aage, const char* aname) : id(aid), age(aage) {			// 생성자 정의, 또 id와 age가 콜론초기화되어 생성자가 호출될때 바로 초기화 된다.
	printf("생성자 호출\n");
	//id = aid; // 콜론 초기화를 했기 때문에 더이상 필요 없는 부분
	//age = aage;
	strcpy_s(name, 10, aname);
}

void Myclass::getData()
{
	cout << id << ' ' << name << ' ' << age << endl;
}

int main()
{
	Myclass s('2', 23, "홍길동");
	//s.set('2', 12, "홍길동");
	s.getData();

	return 0;
}