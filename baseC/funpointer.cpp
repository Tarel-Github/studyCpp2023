#include<iostream>

int add(int n1, int n2){return n1 + n2;}
int sub(int n1, int n2){return n1 - n2;}

int main()
{
	int res;
	int (*fp)(int, int);	// 함수 포인터 선언
	fp = add;
	res =fp(10, 20);
	printf("%d\n", res);
	fp = sub;;
	res = fp(10, 10);
	printf("d\n", res);

	printf("%p\n", add);

	return 0;
}