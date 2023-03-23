/*
사용자 정의 자료형인 구조체 : C타입
*/
#include<iostream>

struct human {
	char name[20];
	int age;
};

int main()
{
	//char h;
	struct human h = { "홍길동", 23 };			// 구조체 human 타입의 구조체 변수 h 선언
	printf("이름: %s\n", h.name);
	printf("나이: %s\n", h.age);


	return 0;
}


