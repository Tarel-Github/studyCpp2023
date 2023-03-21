#include <iostream>

//int main()
//{
//	int val1;
//	std::cout << "첫 번째 숫자입력: ";
//	std::cin >> val1;
//
//	int val2;
//	std::cout << "두 번째 숫자입력: ";
//	std::cin >> val2;
//
//	int res = val1 + val2;
//	std::cout << "덧셈결과: " << res << std::endl;
//	return 0;
//}

int main()
{
	int val1, val2;
	int res = 0;
	std::cout << "두개 입력: ";
	std::cin >> val1 >> val2;
	if (val1 < val2) {
		for (int i = val1 + 1; i < val2; i++) {
			res += i;
		}
	}
	else {
		for (int i = val2 + 1; i < val1;i++) {
			res += i;
		}
	}
	std::cout << "두 정수 사이 합: " << res << std::endl;

	return 0;
}