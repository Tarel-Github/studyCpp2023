#include<iostream>

int main(int argc, char* argv[])
{
	int i = 0;
	printf("전달 인자개수: %d\n", argc);
	for (i = 0; i < argc; i++) {
		printf("argv[%d]: %s\n", i, argv[i]);
	}

	return 0;
}