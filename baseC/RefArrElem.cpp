#include<iostream>
using namespace std;

//int main(void)
//{
//	int ary[5] = { 1, 2, 3, 4, 5 };
//	printf("ary 전체크기: %d\n", sizeof(ary));
//	int* pary = ary;
//
//	printf("ary 주소:\t %p\n", ary);
//	printf("ary[0] 주소:\t %p\n", &ary[0]);			// 1번째 방의 주소를 나타냄
//	printf("ary + 1:\t %p\n", ary + 1);				// 2번째 방의 주소를 나타냄, 위 보다 4바이트 높은 값이 출력됌
//	printf("ary[1] 주소: \t %p\n\n", &ary[1]);		// 위와 동일한 값이 나옴
//
//	printf("pary 주소: \t %p\n", &pary);				// 1번째 방의 주소와 동일
//	printf("pary 값: \t %p\n", pary);					// 위와 동일
//	printf("pary[0] 주소: \t %p\n", &pary[0]);			// 위와 동일
//	printf("pary[0] 값: \t %d\n", pary[0]);				// 1번째 방의 값을 가져옴
//
//	printf("pary[0] 값: \t %d\n", *pary);				// 1번째 방의 값을 가져옴
//	printf("pary[1] 값: \t %d\n", *(pary + 1));			// 2번째 방의 값을 가져옴
//
//	return 0;
//}

using namespace std;

int main()
{
	int num = 12;
	int* ptr = &num;
	int** dptr = &ptr;

	int& ref = num;
	int* (&pref) = ptr;
	int** (&dpref) = dptr;

	cout << ref << endl;
	cout << *pref << endl;
	cout << **dpref << endl;

	return 0;
}