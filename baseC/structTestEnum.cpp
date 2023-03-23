#include<stdio.h>

enum week {
	sun = 0,
	mon = 1,
	tue,		// 이 부분 밑으로 비어있어도, 알아서 tue에는 2, wed는 3이 된다.
	wed
};

int main()
{
	printf("%d\n", sun);
	printf("%d\n", tue);
	printf("%d\n", wed);

	return 0;
}
