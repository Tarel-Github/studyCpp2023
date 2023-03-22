#include<stdio.h>	// C의 헤더파일

int main()
{
	/*int num = 10;
	printf("num: %d\n", num);
	num = 20;
	printf("num: %d\n", num);
	*/
	
	const int num = 10;									// 상수화할 때는 초기화를 동시에 해주어야 한다, 예를 들어 const int num; 이렇게 적으면 아무것도 할 수 없는 쓰레기 값이 되어버린다.
	printf("num: %d\n", num);

	int* p = &num;										// 주소를 저장할 수 있는 포인터변수, &(주소연산자), 여기서 *는 연산자가 아닌 기호로 그저 포인터변수임을 나타낸다.
	printf("p에 저장된 값:  %p\n", p);					// 주소를 저장할 때는 앞에 &를 붙여줘야 한다.
	printf("p가 참조하는 값:  %d\n", *p);				// 여기서 p에 저장되는 값은 렘의 주소값이며 p가 참조하는 값은 10이다.

	*p = 100;											// 여기서 나온 *은 간접 참조연산자다. 포인터는 주소를 저장하므로
	printf("p가 가리키는 곳의 데이터 값:  %d\n", *p);	// 여기서 p에 저장되는 값은 렘의 주소값이며 p가 참조하는 값은 10이다.
	printf("p가 참조하는 값:  %d\n", num);				// 여기서 p에 저장되는 값은 렘의 주소값이며 p가 참조하는 값은 10이다.
	printf("num: %d\n", num);

	int num1 = 100;
	int num2 = 200;
	const int* pa = &num1;
	printf("pa: %p\n", pa);
	pa = &num2;
	printf("변경 후 pa: %p\n", pa);

	//*pa = 50;

	int* const pb = &num1;			// 포인터 변수의 상수화
	*pb = 70;

	return 0;
}
