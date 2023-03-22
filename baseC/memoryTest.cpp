#include <stdio.h>

int g = 0;

void func()
{
	printf("func() : %p\n", func);
}

int main()
{
	int n = 10;				// 지역변수
	static int c;			// static은 프로그램 실행과 동시에 저장되는 변수 (정적데이터)
	const int d = 10;		// const 또한 정적 데이터
	char ary[10] = "hi";

	func();

	printf("local  n : %p\n", &n);
	printf("global g : %p\n", &g);
	
	printf("static c : %p\n", &c);
	printf("const  d : %p\n", &d);
	printf("array    : %p\n", &ary);
	
	/* 출력결과
		func()   : 00007FF6A3941325
		local  n : 000000A1753BFB34
		global g : 00007FF6A394C170
		static c : 00007FF6A394C174
		const  d : 000000A1753BFB54
		array    : 000000A1753BFB78
	*/
	// 주소를 보면 func(), 글로벌변수, 스테틱은 형태가 비슷한 것을 알 수 있는데, 이는 정적데이터 영역에 저장되었음을 알 수 있다.

	return 0;
}
/*
메모리 영역은 크게 나누면
1. 코드세그먼트, 2. 데이터세그먼트

코드세그먼트에는 함수가 저장,
기본적으로 main 함수가 가장 먼저 저장되고
이 코드의 경우 main 다음으로 func()가 저장된다.
그 다음 printf()가 저장된다.


데이터세그먼트는
동적데이터 영역과 정적데이터 영역으로 나뉘며
동적 데이터 영역에는 스텍영역과 힙영역으로 나뉘며
정적 데이터 영역에는 상수 등이 저장된다.
*/