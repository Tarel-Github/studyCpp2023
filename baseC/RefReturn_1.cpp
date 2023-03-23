#include <iostream>
using namespace std;

int& RefRetFuncOne(int& ref) {
	cout << "함수내: \t" << ref << endl;
	ref++;
	cout << "함수내: \t" << ref << endl;
	return ref;
}

int main(void) {
	int num1 = 1;
	int &num2 = RefRetFuncOne(num1);

	cout << "함수밖1: \t" << num1 << endl;		// num1 주소를 찾아서 그 값을 1 증가 시켰다. 때문에 num1의 값은 1 증가했다.
	cout << "함수밖2: \t" << num2 << endl;		// num2는 num1의 주소에 있었던 값이다. 그게 1 증가했으니 역시 num2도 2가 된다.

	num1++;
	cout << "num1: \t" << num1 << endl;			// num1의 값을 1 증가시켰으니 값은 3이 된다.
	num2++;
	cout << "num1: \t" << num1 << endl;			// num1의 주소에 위치한 값을 1 증가시켰으니 값은 4가 된다.
	cout << "num2: \t" << num2 << endl;
	return 0;
}