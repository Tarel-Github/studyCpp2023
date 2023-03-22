#include<stdio.h>	// C의 헤더파일

int main()
{
	/*int num = 10;
	printf("num: %d\n", num);
	num = 20;
	printf("num: %d\n", num);
	*/
	const int num = 10; // 상수화할 때는 초기화를 동시에 해주어야 한다, 예를 들어 const int num; 이렇게 적으면 아무것도 할 수 없는 쓰레기 값이 되어버린다.
	printf("num: %d\n", num);
	num = 20;

	return 0;
}
