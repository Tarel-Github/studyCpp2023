#include <iostream>
using namespace std;

void static_Counter()
{
	static int cnt;
	cnt++;
	cout << "Current static cnt:" << cnt << endl;
}
void Counter()
{
	int cnt = 0;
	cnt++;
	cout << "Current cnt:" << cnt << endl;
}

int main(void)
{
	for (int i = 0; i < 10; i++) {
		static_Counter();				// 출력결과 이 수는 계속 증가하고
		Counter();						// 이 수는 계속 1이다.
	}
	return 0;
}