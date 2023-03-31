#include<iostream>
using namespace std;


void divide(int a, int b) {
	int c, d;
	if (b == 0)throw b;	//예외가 발생되면

	c = a / b;
	cout << "몫: " << c << endl;
	d = a % b;
	cout << "나머지: " << c << endl;
}


int main()
{
	try {
		divide(10, 3);
		divide(100, 5);
		divide(3, 0);
	}
	catch (int ex) {
		cout << ex << "로 나눌 수 없습니다. 예외 발생" << endl;
	}
	cout << "예외 발생 해도 정상 종료" << endl;

	return 0;
}