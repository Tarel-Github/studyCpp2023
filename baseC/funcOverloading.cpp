#include<iostream>

// 기본값이 있어도 제대로 작동함
int func(int a = 10, int b = 20)
{
	return a + b;
}

int main() {
	func();
	func(5);
	func(5, 10);
	
	return 0;
}