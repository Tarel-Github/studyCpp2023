#include <iostream>

int main()
{
	char ch[5];// = "hong";			//배열 선언, 내가 넣어줄 문자열의 +1을 해줘야함, 예를 들어 ch[5]에는 문자 4개까지만 들어간다. 마지막 칸에는 null이 들어가야 함
									// 문자의 경우에는 마지막 인덱스에 넣을 수 있지만 문자열의 경우는 아님
	ch[0] = 'h';
	ch[1] = 'o';
	ch[2] = 'n';
	ch[3] = 'g';
	ch[4] = 'a';

	for (int i = 0; i < 5; i++) {
		printf("%c", ch[i]);
	}
	//printf("char 크기: %d\n", sizeof(char));
	//printf("%s\n", ch);
	//printf("ch[4] : %c\n", ch[4]);
	//printf("cha[4] : %s\n", ch[4]);
	//ch[0] = 'a';	//선언된 배열에 문자를 넣는다. 이 때, 문자열은 못 넣는다.

	printf("배열이름 ch: %p", ch);
	printf("배열주소 ch: %p", &ch);

	return 0;
}