#include<iostream>

int main()
{
	/*
	int num = 10;		// 초기화
	int num1;			// 선언
	num1 = 20;			// 대입
	num = 30;
	printf("int크기: %d\n", sizeof(int));

	char ch;			// 문자타입
	printf("char크기: %d\n", sizeof(char));

	double d = 3.14;	// 실수타입
	printf("double크기: %d\n", sizeof(double));
	*/

	char ch = 0x7f;		// 16진법: 0 1 2 3 4 5 6 7 8 9 A B C D E F
						// 0b 0111 1111 (8bit)

	unsigned char ch1 = 0x7f;

	printf("ch: %x \t ch: %d\n", ch, ch);
	printf("ch: %x \t ch: %d\n\n", ch1, ch1);


	char ch2 = 0x9f;							// 8개의 비트중 첫번째 비트는 부호비트, 즉, 양수냐 음수냐를 나타낸다.
	unsigned char uch2 = 0x9f;					// 얘는 부호비트가 없다, 때문에 음수가 없어지는 대신, 최대값이 두 배가 된다.
	printf("ch: %x \t ch: %d\n", ch2, ch2);		// 8개의 비트중 가장 앞부분은 부호를 판단하는 비트이며 이 때문에 7비트까지만 값을 넣을 수 있다.
	printf("uch: %x \t uch: %d\n\n", uch2, uch2);	// unsigned가 붙으면 부호비트가 사라진다. 이 때문에 8비트 전부 값을 넣을 수 있다.

									// 0b 1001 1111 << 1 : 0b 1 0011 1110
	uch2 = uch2 << 1;				// 비트연산자. uch2를 왼쪽으로 1bit만큼 이동시킨다.
	ch2 = ch2 << 1;
	printf("uch2 << 1: %x \t ch2 << 1: %x \n\n", uch2, ch2);
	
	ch2 = 0x9f;
	uch2 = 0x9f;
	ch2 = ch2 >> 1;
	uch2 = uch2 >> 1;
	printf("uch2 >> 1: %x \t ch2 >> 1: %x \n", uch2, ch2);


	return 0;
}

