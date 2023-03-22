#include <iostream>



int Adder()				// Adder 함수의 정의부, 함수에 기본값이 없다.
{
	return 0;
}
int Adder(int num1, int num2=0)				// Adder 함수의 정의부, 함수에 기본값이 없다.
{
	return 1;
}

int main(void)
{
	std::cout << Adder(5) << std::endl;
	std::cout << Adder(3, 5) << std::endl;
	return 0;
}


// 함수의 기본값은 함수의 선언부에 위치해야 한다.
// 디폴트 값은 반드시 오른쪽부터 채워줘야 한다. 즉, 아래와 같은 경우는 불가능 하다.
// int A(int num = 1, int num2){...}
