#include <iostream>

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int res;
//	res = 10 + 20;
//	std::cout << "res : " << res << std::endl;
//
//	return 0;
//}

/*
void func()
{
	int a = 10;
	int b = 20;
	int res;
	res = a + b;
	std::cout << "res : " << res << std::endl;
}

int main()
{
	func();			// 함수호출
	return 0;
}
*/
int func(int a, int b); // 함수는 메인함수보다 아래에 위치해선 안 된다. 왜냐하면 순차적으로 실행하기 때문에 메인보다 아래 있으면 메인 함수를 실행할 때, 없는 함수를 실행하는 꼴이 되기 때문이다.
					// 그러나 가독성을 위해서, 함수의 내용을 main보다 아래에 위치해놓고 똑같은 함수를 "정의만" main보다 위에 해줄 수 있다.
					// 이로 인해서 코드의 가독성을 크게 올릴 수 있다.

int main()
{
	int ans = func(10, 20);
	std::cout << "res : " << ans << std::endl;
	return ans;// 함수호출
}


int func(int a, int b)  // 입력으로 int a와 b를 받음, 이 함수가 출력하는 값은 int 형식이다.
{
	int res;
	res = a + b;
	//std::cout << "res : " << res << std::endl;

	return res;
}
