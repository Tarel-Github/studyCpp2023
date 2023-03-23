/*
메모리 동적 할당
*/
#include<iostream>
using namespace std;

int main() {
	int* arr;
	int size;

	printf("배열방의 갯수: ");
	scanf_s("%d", &size);		//scanf로 입력을 받을때는 주소 연산자가 필요하다.

	arr = (int*)malloc(sizeof(int));	//malloc에는 크기가 와야함, 이것은 할당된 메모리의 주소를 반환한다, heap 영역에 할당
	//arr = malloc(sizeof(int));
	printf("만들어진 배열 크기: %d\n", sizeof(int)*size);
	printf("%d\n", sizeof(int));

	free(arr);		// 메모리 해제

	return 0;
}

