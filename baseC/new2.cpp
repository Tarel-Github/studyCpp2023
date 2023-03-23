/*
메모리 동적 할당
*/
#include<iostream>
using namespace std;

int main() {
	int size;
	int* arr;

	printf("배열개수: ");
	scanf_s("%d", &size);

	arr = (int*)malloc(sizeof(int) * size);

	printf("%d개의 숫자를 입력하시오.\n", size);
	for (int i = 0; i < size; i++) {
		printf("%d번째 숫자: ", i + 1);
		scanf_s("%d", arr + i);
	}
	for (int i = 0; i < size; i++) {
		printf("%d\n", arr[i]);
		printf("%d\n", *(arr + i));
	}
	
	free(arr);

	return 0;
}

