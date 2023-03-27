#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Human{
private:
	//char name[20];//선언과 동시에 초기화는 가능함		//이건 힙 영역에 저장하고 아래 int 두개는 스택 영역에 저장
	char* name;			// 포인트 사용
	//Human ary[10];
	int id;
	int age;
public:
	Human(const char *aname, int aid, int aage) {		// 클래스 명과 같으면 생성자, name에 포인트 사용
		name = new char[strlen(aname)+1];
		strcpy(name, aname);	//name 변수에 aname 입력
		id = aid;
		age = aage;

	}
	~Human() {		//소멸자, 가장 나중에 호출
		delete[] name;
	}

	//void setData(const char aname[20], int aid, int aage) {
	//	//name = "홍길동";//불가능
	//	strcpy(name, aname);	//name 변수에 aname 입력
	//	id = aid;
	//	age = aage;
	//}

	void getData() {
		cout << "이름: " << name << " " << "주번: " << id << " " << "나이: " << age << endl;
	}
};

int main()
{
	//Human h;
	//h.setData("홍길동", 1, 30);
	Human h("홍길동", 1, 30);	// 생성자가 있으면 이런식으로 작성
	h.getData();

	Human hary[3] = {Human("김영희", 2, 23), Human("김철수", 3, 25), Human("손민성", 4 , 25)}; // 3개만 선언
	hary[0].getData();
	hary[1].getData();
	hary[2].getData();

	return 0;
}