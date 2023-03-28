#include<iostream>
using namespace std;

class SoSimple
{
private:
	int num;
	int num1;
	const int n = 10;
public:
	SoSimple(int n) : num(n), n(n1) { }
	SoSimple& AddNum(int n){
		num += n;
		return *this;
	}
	void ShowData() const {
		cout << "num  : " << num << endl;
		cout << "n    : " << n << endl;
		cout << "num1 : " << num1 << endl;
	}
};

int main(void)
{
	const SoSimple obj(7);
	obj.ShowData();
	return 0;
}
