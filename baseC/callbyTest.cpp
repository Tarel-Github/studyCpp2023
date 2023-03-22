#include <stdio.h>

// 1번째
// 
//int main()
//{
//	int n1 = 10;
//	int n2 = 20;
//
//	printf("변경 전, n1: %d \t n2: %d\n", n1, n2);
//
//	n1 = 20;
//	n2 = 10;
//
//	printf("변경 후, n1: %d \t n2: %d\n", n1, n2);
//
//
//	return 0;
//}



// 2번째
// call by value 를 사용한 형태
// swap 함수 안에서는 값이 변하겠지만 main 함수 내에서는 변하지 않았다.
// 값에 의한 복사로써 swap에선 복사된 값이 변했기에 원본이 변하지 않는다.
//
//void swap(int n1, int n2)
//{
//	int temp;
//	temp = n1;
//	n1 = n2;
//	n2 = temp;
//	printf("호출 중 n1: %d \t n2: %d\n", n1, n2);
//}
//
//int main()
//{
//	int n1 = 10, n2 = 20;
//
//	printf("호출 전 n1: %d \t n2: %d \n", n1, n2);
//
//	swap(n1, n2);
//	printf("호출 후 n1: %d \t n2: %d \n", n1, n2);
//
//	return 0;
//}


// 3번째 포인터로 구현 : call by reference
// 데이터가 저장된 주소를 참조하여 값을 수정했기 때문에 원본 값이 변한다.
void swap(int* pn1, int* pn2)
{
	int temp;
	temp = *pn1;
	*pn1 = *pn2;
	*pn2 = temp;
	//printf("호출 중 n1: %d \t n2: %d\n", n1, n2);
}

int main()
{
	int n1 = 10, n2 = 20;

	printf("호출 전 n1: %d \t n2: %d \n", n1, n2);

	swap(&n1, &n2);
	printf("호출 후 n1: %d \t n2: %d \n", n1, n2);

	return 0;
}