#include<iostream>
using namespace std;

int main()
{
	int a, b, c, d;
	cout << "수 입력" << endl;
	cin >> a;
	cout << "젯수 입력" << endl;
	cin >> b;
	try {
		if (b == 0)throw b;	//예외가 발생되면
		c = a / b;
		cout << "몫: " << c << endl;
		d = a % b;
		cout << "나머지: " << c << endl;
	}
	catch (int ex) {
		cout << ex << "로 나눌 수 없습니다. 예외 발생" << endl;
	}
	cout << "예외 발생 해도 정상 종료" << endl;

	return 0;
}