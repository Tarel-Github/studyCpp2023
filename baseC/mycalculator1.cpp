#include <iostream>
#include <cstring> // for strcpy()
using namespace std;

class Mycalculator {
private:
	int num1;
	int num2;
public:
	Mycalculator(int num_1, int num_2);				// 생성자로 초기화한다. (콜론초기화)

	void add(int num_1, int num_2);
	void sub(int num_1, int num_2);
	void mul(int num_1, int num_2);
	void div(int num_1, int num_2);
};

Mycalculator::Mycalculator(int num_1, int num_2) : num1(num_1), num2(num_2) {	//클레스의 이름과 똑같이 써서 초기화
	printf("생성자 호출: \t%d, %d\n", num_1, num_2);
	add(num_1, num_2);
	sub(num_1, num_2);
	mul(num_1, num_2);
	div(num_1, num_2);
	printf("====================종료====================\n");
}

void Mycalculator::add(int num_1, int num_2)
{
	printf("더하기 결과 \t%d\n", num_1 + num_2); 
}
void Mycalculator::sub(int num_1, int num_2) 
{ 
	printf("빼기   결과 \t%d\n", num_1 - num_2); 
}
void Mycalculator::mul(int num_1, int num_2) 
{
	printf("곱하기 결과 \t%d\n", num_1 * num_2); 
}
void Mycalculator::div(int num_1, int num_2)
{ 
	if (num_2 == 0) {
		printf("0으로 나눌 수 없습니다.\n"); 
	} else {
		printf("나누기 결과 \t%d\n", num_1 / num_2);
	} 
}

int main()
{
	Mycalculator M(20, 10);
	M.add(20, 14);
	return 0;
}