#include<iostream>
using namespace std;

class SoSimple
{
private:
	int num1;
	int num2;
public:
	explicit SoSimple(int n1, int n2) : num1(n1), num2(n2) {}	// ������ ��ȯ�� ���� Ű���� explict
	SoSimple(SoSimple& copy) : num1(copy.num1), num2(copy.num2) 
	{
		cout << "Called SoSimple(SoSimple & copy" << endl;
	}
	void ShowSimpleData()
	{
		cout << num1 << endl;
		cout << num2 << endl;
	}
};

int main(void) 
{
	SoSimple sim1(15, 30);
	cout << "���� �� �ʱ�ȭ ����" << endl;
	SoSimple sim2 = sim1;			// SoSimple sim2(sim1); ���� ��ȯ!
	cout << "���� �� �ʱ�ȭ ����" << endl;
	sim2.ShowSimpleData();
	return 0;
}