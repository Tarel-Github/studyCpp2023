#include<iostream>
using namespace std;

class Temporary
{
private:
	int num;
public:
	Temporary(int n) : num(n)
	{
		cout << "create obj:" << num << endl;
	}
	~Temporary()
	{
		cout << "destroy obj:" << num << endl;
	}
	void ShowTempInfo()
	{
		cout << "My num is" << num << endl;
	}
}; 
int main(void)
{
	Temporary(100);
	cout << "메인 끝" << endl << endl;

	Temporary(200).ShowTempInfo();
	cout << "메인 끝" << endl << endl;

	const Temporary& ref = Temporary(300);
	cout << "메인 끝" << endl << endl;
	return 0;
}

