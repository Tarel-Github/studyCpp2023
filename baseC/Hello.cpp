#include<iostream>

// 메인함수는 하나의 디렉토리 내에 두 개가 될 수 없다, 고로 다른 파일을 실행할 때는 전체 주석화 하거나 프로젝트에서 제외시킨다.
// 제외된 프로젝트는 솔루션 탐색기에서 다시 복원가능

int main(void)			// 함수 머리: 출력할 함수 이름(입력)			// 파라미터를 비워두거나 void를 적어놓으면 파라미터가 없다는 뜻
{						// 함수 시작(함수 몸체)
	int num = 20;		// 변수선언, cpp에서 int는 4바이트로 32비트임 (다른 디버거에서는 다를 수 있음)
	std::cout << "Hello World!!" << std::endl;
	std::cout << num << std::endl;
	std::cout << num << 'A';			// std::endl; 이 없으므로 줄바꿈이 이루어 지지 않음
	std::cout << "hi" << std::endl;

	return 0;			// 리턴
}						// 함수 끝
